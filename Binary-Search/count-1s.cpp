#include <bits/stdc++.h>
using namespace std;
int solver(int arr[], int n, int l, int r)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == 0)
        {
            l = mid + 1;
        }
        else
        {
            if (mid == 0 or arr[mid] != arr[mid-1])
            {
                return n - mid;
            }
            else
            {
                r = mid - 1;
            }
        }
    }
    return -1;
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
    cout<<solver(arr,n,0,n-1);
    return 0;
}