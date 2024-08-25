#include<bits/stdc++.h>
using namespace std;
int solver(int arr[],int n){
    int cnt=1;
    int maj=0;
    for(int i=1;i<n;i++){
        if(arr[maj]==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt==0){
            maj=i;
            cnt=1;
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[maj]){
            res++;
        }
    }
    if(res<=n/2){
        res= -1;
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
    cout << solver(arr, n);
    return 0;
}