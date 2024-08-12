#include<bits/stdc++.h>
using namespace std;
int solver(int a,int b){
    // //naive approach--->
    // int res=min(a,b);
    // while(res>0){
    //     if(a%res==0 and b%res==0){
    //         break;
    //     }
    //     res--;
    // }
    // return res;
        //Eucledian algorithm---->
        // while(a!=b){
        //     if(a>b){
        //         a=a-b;
        //     }
        //     else{
        //         b=b-a;
        //     }
            
        // }
        // return a;
//Eucledain algorithm recurrsion---->
if(b==0){
    return a;
}
return solver(b,a%b);
}
int main(){
    int a,b;
    cout<<"enter"<<endl;
    cin>>a>>b;
    cout<<solver(a,b);
    return 0;
}