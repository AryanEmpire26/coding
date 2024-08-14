#include<bits/stdc++.h>
using namespace std;
//idea-> a last bit of res means the bit having different values in res1 and res2;
void solver(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }

    int k= (res&(~(res-1))); // this is the last set bit of res and other bit get masked...
    int res1=0,res2=0;
    for(int i=0;i<n;i++){  
        if(arr[i]&k){
            res1=res1^arr[i];
        }
        else{
            res2=res2^arr[i];
        }
    }
    cout<<res1<<" "<<res2;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solver(arr, n);
    return 0;
}