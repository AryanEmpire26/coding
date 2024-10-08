#include <bits/stdc++.h>
using namespace std;
int solver(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    // max takes only 2 arguments...
    int res = max(solver(n - a, a, b, c), max(solver(n - b, a, b, c), solver(n - c, a, b, c)));
    if (res == -1)
    {
        return -1;
    }
    return res + 1;
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << solver(n, a, b, c);
    return 0;
}