#include <bits/stdc++.h>
using namespace std;
void solver(vector<vector<int>> &arr)
{
    int m = arr.size();    // row
    int n = arr[0].size(); // col

    for (int j = 0; j < m; j++)
    {

        if (j % 2 == 0)
        {

            for (int i = 0; i < n; i++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << arr[j][i] << " ";
            }
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