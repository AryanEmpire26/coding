#include<bits/stdc++.h>
using namespace std;
bool solver(int arr[],int n){
    int rs=0;
    for(int i=0;i<n;i++){
        rs+=arr[i];
    }
    int ls=0;
    for(int i=0;i<n;i++){
        rs-=arr[i];
        if(ls==rs){return true;}
        ls+=arr[i];
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solver(arr, n)?cout<<"YES":cout<<"NO";
    return 0;
}