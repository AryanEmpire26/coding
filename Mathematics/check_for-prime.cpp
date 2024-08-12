#include <bits/stdc++.h>
using namespace std;

bool solver(int n)
{
        // if (n == 1)
        // {
        //     return false;
        // }
        // int cnt = 0;
        // for (int i = 2; i*i <= n; i++)
        // {
        //     if (n % i == 0)
        //     {
        //         cnt++;
        //     }
        // }
        // if (cnt == 0)
        // {
        //     return true;
        // }
        // return false;

    // optimized approach---->
    if (n == 1)
        return false;
    if (n == 2 or n == 3)
        return true;
    if (n % 2 == 0 or n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 or n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (solver(n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}