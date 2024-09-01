#include<bits/stdc++.h>
using namespace std;
void inter(int a[],int b[],int n1,int n2){
    int i=0,j=0;
    int temp=-1;
    while(i<n1 and j<n2){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            
            if(a[i]!=temp){
            cout<<a[i]<<" ";

            }
            temp=a[i];
            i++;
            j++;
        }
    }
}
int main(){

    int n1,n2;
    cin >> n1>>n2;
    int a[n1],b[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    inter(a,b,n1,n2);
    return 0;
}