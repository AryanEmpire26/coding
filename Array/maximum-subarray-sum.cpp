#include<bits/stdc++.h>
using namespace std;
int solver(int arr[],int n){
        int res=arr[0];
        int curr=0;
    for(int i=0;i<n;i++){
        curr=curr+arr[i];
        if (curr > res)
        {
            res = curr;
        }
        if(curr<0){
            curr=0;
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