#include<bits/stdc++.h>
using namespace std;

int solver(int n){
    // long long ans = 1; // taking time o(n) space o(1)
    // for (long long i = 1; i <= n; i++)
    // {
    //     ans = ans * i;
    // }                                
    // int cnt=0;
    // while(ans%10==0){        <----take more space complexity---->
    //     ans/=10;
    //     cnt++;
    // }
    // return cnt;
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+n/i;
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<solver(n)<<endl;
    return 0;
}