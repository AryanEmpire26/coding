#include <bits/stdc++.h>
using namespace std;

int solver(int a, int b)
{
    // naive approach------->

    // int res=1;
    // for(int i=1;i<=b;i++){
    //     res=res*a;
    // }
    // cout<<res;

    // better approach------->

    // if (b == 0)
    //     return 1;
    // int temp = solver(a, b / 2);
    // temp = temp * temp;
    // if (b % 2 == 0)
    // {
    //     return temp;
    // }
    // else
    //     return temp * a;

    //optimized approach-------->

        int res=1;
        while(b>0){
        if(b%2!=0){
            res=res*a; //set bit
        }
        a=a*a;       //0 bit
        b=b/2;     //shifting leftward

    }
    return res;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout<<solver(a, b);
    return 0;
}