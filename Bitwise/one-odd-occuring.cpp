#include<bits/stdc++.h>
using namespace std;
int solver(int arr[],int n){
    
    int xor_r=0;
    for(int i=0;i<n;i++){
        xor_r=xor_r^arr[i];
    }
    return xor_r;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solver(arr,n);
    return 0;
}