#include<bits/stdc++.h>
using namespace std;
int solver(int arr[],int n,int k){
    int i=0;
    int j=0;
    int res=0;
    int sum=0;
    while(j<n){
        sum=sum+arr[j];
         if((j-i+1)==k){
            res=max(res,sum);
            sum-=arr[i];
            i++;
            
        }
        j++;
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
    int k;
    cin>>k;
    cout << solver(arr, n,k);
    return 0;
}