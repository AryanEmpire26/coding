#include<bits/stdc++.h>
using namespace std;

void solver(int arr[],int n){
    int cnt=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            cout<<arr[i-1]<<" "<<cnt+1<<endl;
            cnt=0;
        }
        else{
            cnt++;
        }
        if(i==n-1){
            cout << arr[i - 1] << " " << cnt + 1 << " ";
        }
    }
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