#include<bits/stdc++.h>
using namespace std;

bool solver(int n){
    //naive approach--------------->

    // if(n==0) return false;
    // while(n>1){
    //     if(n%2!=0){
    //         return false;
    //         break;
    //     }
    //     n=n/2;
    // }
    // return true;

    //Efficint approach------------->

    if(n==0) return false;
    return((n&(n-1))==0);   //Brian Kerningum's Algo
}

int main(){
    int n;
    cin>>n;
    solver(n)?cout<<"true":cout<<"false";
    return 0;
}