#include<bits/stdc++.h>
using namespace std;

int solver(int arr[],int n){
    int maxele=INT_MIN;
    int pos=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxele){
            maxele=arr[i];
            pos=i;
        }
    }
    return pos;
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