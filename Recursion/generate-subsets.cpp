#include<bits/stdc++.h>
using namespace std;

void solver(string &s,int i,string curr){
    if(i==s.length()){
        cout<<curr<<" ";
        return ;
    }
    solver(s,i+1,curr);
    solver(s,i+1,curr+s[i]);
}

int main(){
    string s;
    cin>>s;
    string curr="";
    int i=0;
    solver(s,i,curr);
    
    return 0;
}