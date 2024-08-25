#include <bits/stdc++.h>
using namespace std;
bool solver(int arr[], int n, int sum)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    while (j < n)
    {
        temp += arr[j];
        if (temp > sum)
        {
            while (temp > sum)
            {
                temp -= arr[i];
                i++;
            }
        }
        
        j++;

        if(temp==sum){
            return true;
        }
    }
        return false;
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
    int sum = 0;
    cin >> sum;
    solver(arr, n, sum)?cout<<"YES":cout<<"NO";
    return 0;
}