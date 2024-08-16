#include<bits/stdc++.h>
using namespace std;
// int fact(int n){               //slower because it is not a tail recursive
//     if(n<=1) return 1;
//     return n*fact(n-1);
// }

int fact(int n,int k){           //tail recursive
    if(n<=1) return k;
    return fact(n-1,k*n);
}
int main(){
    int n;
    cin>>n;
    // cout<<fact(n);
    int k=1;
    cout<<fact(n,k);
    return 0;
}