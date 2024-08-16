#include<bits/stdc++.h>
using namespace std;
bool fun(string &s,int start,int end){
    if(start>=end){
        return true;
    }
    return ((s[start]==s[end]) and (fun(s,start+1,end-1)));
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    fun(s,0,n-1)?cout<<"yes"<<endl:cout<<"NO"<<endl;
    return 0;
}