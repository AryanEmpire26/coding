#include <bits/stdc++.h>
using namespace std;
int solver(int arr[], int n)
{
    int leftarr[n];
    int rightarr[n];
    int leftmax = arr[0];
    int rightmax = arr[n - 1];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > leftmax)
        {
            leftmax = arr[i];
        }
        leftarr[i] = leftmax;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > rightmax)
        {
            rightmax = arr[i];
        }
        rightarr[i] = rightmax;
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += (min(leftarr[i], rightarr[i]) - arr[i]);
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