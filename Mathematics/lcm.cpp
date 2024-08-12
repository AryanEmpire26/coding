#include<bits/stdc++.h>
using namespace std;
// int solver(int a,int b){
//     //its a naive approach----->
//     // int res=a*b;
//     // for(int i=1;i<=res;i++){
//     //     if(i%a==0 and i%b==0){
//     //         return i;
//     //         break;
//     //     }
//     // }
//     // return -1;
//     return -1;
// }

// using euclidean approach--->
//   a*b= gcd(a,b)*lcm(a,b)
// so lcm(a,b)= a*b/gcd(a,b);
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
    }
    int lcm(int a,int b){
        return (a*b)/gcd(a,b);
    }

int main(){
    int a, b;
    cout << "enter" << endl;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}