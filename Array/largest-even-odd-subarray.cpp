#include<bits/stdc++.h>
using namespace std;
int solver(int arr[],int n){
    
    int cnt=1;
    int res=1;
    for(int i=1;i<n;i++){
        if ((arr[i] % 2 != 0 and arr[i - 1] % 2 == 0) or (arr[i] % 2 == 0 and arr[i - 1] % 2 != 0))
        {
            cnt++;
            res=max(res,cnt);
            
        }
        else{
            cnt=1;
        }
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solver(arr, n);
    return 0;
}