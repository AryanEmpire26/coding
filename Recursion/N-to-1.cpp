#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==0) return;
    cout<<n<<endl;
    fun(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    fun(n);
    return 0;
}