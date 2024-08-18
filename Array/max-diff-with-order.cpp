#include<bits/stdc++.h>
using namespace std;
// maximum value of arr[j]-arr[i]  such that j>i

int maxdiff(int arr[],int n){
    int minval=arr[0];
    int res=arr[1]-arr[0];

    for(int j=1;j<n;j++){
        res= max(res,arr[j]-minval);
        minval= min(minval,arr[j]);
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    cout<<maxdiff(arr,n);
    return 0;
}