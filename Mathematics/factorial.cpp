#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    // if(n==0 or n==1){          taking space and time both o(n);
    //     return 1;
    // }
    // return n*fact(n-1);
    int ans=1;                    //taking time o(n) space o(1)
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}