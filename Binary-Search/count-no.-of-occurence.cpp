#include <bits/stdc++.h>
using namespace std;

int fo(int arr[], int n, int l, int r, int x)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else if (arr[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            if (mid == 0 or arr[mid] != arr[mid - 1])
            {
                return mid;
            }
            else
            {
                r = mid - 1;
            }
        }
    }
    return -1;
}

int lo(int arr[], int n, int l, int r, int x)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else if (arr[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            if (mid == n - 1 or arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                l = mid + 1;
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
    int x;
    cin >> x;
    int f = fo(arr, n, 0, n - 1, x);
    int l = lo(arr, n, 0, n - 1, x);

    cout<<(l-f+1);
    return 0;
}