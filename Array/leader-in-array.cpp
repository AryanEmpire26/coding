#include<bits/stdc++.h>
using namespace std;
void solver(int arr[],int n){
    int last=arr[n-1];
    cout<<last<<" ";
    for(int i=n-2;i>=0;i--){
        if(last<arr[i]){
            cout<<arr[i]<<" ";
            last=arr[i];
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
solver(arr,n);
    return 0;
}