#include<bits/stdc++.h>
using namespace std;
int solver(int arr[],int n,int x,int l,int r){
if(l>r){
    return -1 ;
}
int mid=(l+r)/2;
if(arr[mid]==x){
    return mid;
}
else if(arr[mid]>x){

    return solver(arr, n, x, l, mid-1);
}
else{
    return solver(arr, n, x, mid+1, r);
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<solver(arr,n,x,0,n-1);
    return 0;
}