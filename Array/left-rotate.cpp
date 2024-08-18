#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n,int d){
int i=d;
int j=n-1;
while(i<=j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}
}
void solver(int arr[],int n,int i){
reverse(arr,i,0);
reverse(arr,n,i);
reverse(arr,n,0);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin>>d;
    solver(arr, n,d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}