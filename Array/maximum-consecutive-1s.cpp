#include<bits/stdc++.h>
using namespace std;
int solver(int arr[],int n){
    int cnt=0;
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=1){
            res=cnt;
            cnt=0;
        }
        else{

        cnt++;
        }
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