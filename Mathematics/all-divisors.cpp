#include <bits/stdc++.h>
using namespace std;
// Naive approach---------->

// void solver(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

// efficient approach---------->

void solver(int n)
{
    int i;
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    for (; i >= i; i--)
    {
        if (n % i == 0)
        {
            cout << n / i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    solver(n);
    return 0;
}