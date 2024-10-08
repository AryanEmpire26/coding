#include <bits/stdc++.h>
using namespace std;
// naive approach------------>
//  bool isprime(int n)
//  {
//      if (n == 1)
//      {
//          return false;
//      }
//      if (n == 2 or n == 3)
//          return true;
//      if (n % 2 == 0 or n % 3 == 0)
//          return false;

//     for (int i = 5; i * i < n; i = i + 6)
//     {
//         if (n % i == 0 or n % (i + 2) == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// vector<int>solver(int n){
//     vector<int>ans;
//     for(int i=2;i<=n;i++){
//         if(isprime(i)){
//             int x=i;
//             while(n%x==0){
//             ans.push_back(i);
//             x=x*i;
//             }
//         }
//     }
//     return ans;
// }
// better approach--------->
//  void solver(int n){
//      if(n<=1)return;
//      for(int i=2;i*i<=n;i++){
//          while(n%i==0){
//              cout<<i<<" ";
//              n=n/i;
//          }
//      }
//      if(n>1){
//          cout<<n;
//      }
//  }

//optimized approach--------->
void solver(int n)
{
    if (n <= 1)
        return;
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << " ";
        n = n / 3;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            n = n / (i + 2);
        }
    }
    if (n > 3)
    {
        cout << n << " ";
    }
}
int main()
{
    int n;
    cin >> n;

    solver(n);

    return 0;
}
