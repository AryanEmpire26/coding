#include <bits/stdc++.h>
using namespace std;
bool isfeasible(int arr[],int n, int ans,int k){
    int req=1;
    int sum=0;

    for(int i=0;i<n;i++){
        if(sum+arr[i]>ans){
            req++;
            sum=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }
    return (req<=k);
}
int solver(int arr[], int n, int l, int r,int k)
{
    int res = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isfeasible(arr, n, mid,k))
        {
            res = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int mx=0;
    int sum=0;
    for(int i=0 ;i<n;i++){
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }
    cout << solver(arr, n, mx,sum,x);
    return 0;
}