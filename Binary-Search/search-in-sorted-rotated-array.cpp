#include <bits/stdc++.h>
using namespace std;
int bs(int arr[], int l, int r, int x)
{
    while (l <= r)
    {

        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > arr[l])
        {
            if (arr[l] <= x and arr[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        else
        {
            if (arr[r] >= x and arr[mid] < x)
            {
                l = mid + 1;
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
    int x;
    cin >> x;

    cout << bs(arr, 0, n - 1, x);
    return 0;
}