#include <bits/stdc++.h>
using namespace std;
void solver(vector<vector<int>> &arr)
{
    int m = arr.size();    // row
    int n = arr[0].size(); // col

    if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[0][i] << " ";
        }
        return;
    }

    else if (n == 1)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i][0] << " ";
        }
        return;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            cout << arr[0][i] << " ";
        }
        for (int i = 1; i < m; i++)
        {
            cout << arr[i][n - 1] << " ";
        }
        for (int i = n - 2; i >= 0; i--)
        {
            cout << arr[m - 1][i] << " ";
        }
        for (int i = m - 2; i > 0; i--)
        {
            cout << arr[i][0] << " ";
        }
    }
}
int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    solver(arr);
    return 0;
}