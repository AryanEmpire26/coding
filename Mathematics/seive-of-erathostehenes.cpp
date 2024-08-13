#include<bits/stdc++.h>
using namespace std;

void solver(int n){
//  naive approach---------------------->
    // vector<bool>temp(n+1,true);

    // for(int i=4;i<=n;i=i+2){
    //     if(temp[i]==true){
    //         temp[i]=false;
    //     }
    // }
    // for(int i=6;i<=n;i=i+3){
    //     if(temp[i]==true){
    //         temp[i]=false;
    //     }
    // }
    // for(int i=10;i<=n;i=i+5){
    //     if(temp[i]==true){
    //         temp[i]=false;
    //     }
    // }
    // for(int i=2;i<=n;i++){
    //     if(temp[i]==true){
    //         cout<<i<<" ";
    //     }
    // }

    //seive of erathostenes-------->
    
    vector<bool>isPrime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    solver(n);
    return 0;
}