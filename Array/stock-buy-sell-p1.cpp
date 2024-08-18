#include <bits/stdc++.h>
using namespace std;
int solver(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            res -= arr[i];
        }
        else if (i == n - 1)
        {
            res += arr[i];
        }
        else
        {
            if (arr[i] > arr[i + 1] and arr[i] > arr[i - 1])
            {
                res += arr[i];
            }
            if (arr[i] < arr[i + 1] and arr[i] < arr[i - 1])
            {
                res -= arr[i];
            }
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
    cout << solver(arr, n);
    return 0;
}