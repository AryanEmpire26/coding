#include <bits/stdc++.h>
using namespace std;
int solver(int arr[], int n, int x, int l, int r)
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
    cout << solver(arr, n, x, 0, n - 1);
    return 0;
}