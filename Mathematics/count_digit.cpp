#include<bits/stdc++.h>
using namespace std;

int solver(int x){
    int cnt=0;
    while (x!=0)
    {
        cnt++;
        x=x/10;
    }
    return cnt;
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<solver(n);
    return 0;
}