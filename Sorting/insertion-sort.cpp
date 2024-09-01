#include<bits/stdc++.h>
using namespace std;
void isort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>key){  //move left till we found arr[j] which is smaller than key
            arr[j+1]=arr[j]; //also move every element right one step
            j--;
        }
        arr[j+1]=key; //if key is already at its correct postion.
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
    isort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}