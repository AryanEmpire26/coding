#include <bits/stdc++.h>
using namespace std;

void toh(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << 1 << " from " << a << " to " << c << endl;
        return;
    }
    toh(n - 1, a, c, b); // source,auxilary,destination
    cout << n << " from " << a << " to " << c << endl;
    toh(n - 1, b, a, c);
}
int main()
{
    int n;
    char a='a';   //  |   |    |
    char b='b';   //  a   b    c
    char c='c';
    cin>>n;
    toh(n,a,b,c);
    return 0;
}