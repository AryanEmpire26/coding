#include <bits/stdc++.h>
using namespace std;
int fun(int arr[], int n, int sum, int i, int temp)
{
    if (i == n)
    {
        if (temp == sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    return (fun(arr, n, sum, i + 1, temp) +
            fun(arr, n, sum, i + 1, temp + arr[i]));
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    int i=0;
    int temp=0;
    cout<<fun(arr,n,sum,i,temp);
    return 0;
}