#include<bits/stdc++.h>
using namespace std;

void solver(int n,int k){
    int t=k-1;
    n=n>>t;
    if(n&1){
        cout<<"set";
    }
    else{
        cout<<"unset";
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    solver(n,k);
    return 0;
}