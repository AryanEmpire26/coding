#include <bits/stdc++.h>
using namespace std;

int getsum(int s, int e, int arr[], int n)
{

   
    if (s == 0)
        return (arr[e]);
    else
        return (arr[e] - arr[s - 1]);
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
    cout << getsum(0,2,arr, n)<<endl;
    cout << getsum(1,3,arr, n)<<endl;
    cout << getsum(2,6,arr, n)<<endl;
    return 0;
}