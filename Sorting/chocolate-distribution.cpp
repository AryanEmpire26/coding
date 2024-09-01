#include<bits/stdc++.h>
using namespace std;

int chocolate(int arr[],int n,int m){
    int res=arr[m-1]-arr[0];
    for(int i=1;i<n-m+1;i++){
        res=min(res,arr[i+m-1]-arr[i]);
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin>>m;
    sort(arr,arr+n);
    cout<<chocolate(arr,n,m);

    return 0;
}