#include <bits/stdc++.h>
using namespace std;
int solver(int arr[], int n)
{
    int i = 0;
    int j = 0;
    while (i < n)
    {
        if (arr[i] != arr[j])
        {
            arr[j + 1] = arr[i];
            j++;
        }
        else
        {
            i++;
        }
    } 
    return j + 1;
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
    int ans = solver(arr, n);
    for (int i = 0; i < ans; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << ans;
    return 0;
}