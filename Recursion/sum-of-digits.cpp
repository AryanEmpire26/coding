#include<bits/stdc++.h>
using namespace std;
int solver(int n){
    if(n==0) return 0;
    return ((n%10)+solver(n/10));
}
int main(){
    int n;
    cin>>n;
    cout<<solver(n);
    return 0;
}