#include<bits/stdc++.h>
using namespace std;
void solver(string s){
    int n=s.length();
    int p=1<<n;
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            if((i&(1<<j))!=0){
                cout<<s[j];
            }
        }
            cout<<endl;
    }
}
int main(){
    string s;
    cin>>s;
    solver(s);
    return 0;
}