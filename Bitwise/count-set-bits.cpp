#include<bits/stdc++.h>
using namespace std;

int solver(int n){
    int cnt=0;
    while(n!=0){
        if(n&1){
            cnt++;
        }
        n=n>>1;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<solver(n);
    return 0;
}