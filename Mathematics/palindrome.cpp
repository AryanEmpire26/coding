#include <bits/stdc++.h>
using namespace std;
void solver(int n)
{
    int ori=n;
    if (n / 10 == 0)
    {
        cout << "true";
    }
    else
    {
        int x = 0;
        while (n != 0)
        {
            x = x * 10 + (n % 10);
            n = n / 10;
        }
        if (x == ori)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    solver(n);
    return 0;
}