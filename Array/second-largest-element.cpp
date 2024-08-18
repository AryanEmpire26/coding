#include <bits/stdc++.h>
using namespace std;

int solver(int arr[], int n)
{
    //naive approach------------------>

    // int maxele = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > maxele)
    //     {
    //         maxele = arr[i];
    //     }
    // }
    // int res = -1;
    // int newmax = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > newmax and arr[i] != maxele)
    //     {
    //         newmax = arr[i];
    //         res = i;
    //     }
    // }
    // return res;

    //efficeint approach----------------->
    
    int sl=-1;
    int l=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[l]){
            sl=l;
            l=i;
        }
         else if (arr[i] < arr[l]) {
            if (sl == -1 || arr[i] > arr[sl]) {
                sl = i;
            }
        }
    }
    return sl;
}
int main()
{
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