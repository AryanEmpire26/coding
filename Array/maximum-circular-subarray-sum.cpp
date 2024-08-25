#include <bits/stdc++.h>
using namespace std;
int kadanes(int arr[], int n)
{
    int curr = 0;
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        if (curr > res)
        {
            res = curr;
        }
        if (curr < 0)
        {
            curr = 0;
        }
    }
    return res;
}
int solver(int arr[], int n)
{
    int normal_sum_max = kadanes(arr, n); //calculation max_subarry_sum

    if (normal_sum_max < 0)
    {
        return normal_sum_max;
    }

    int total_array_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_array_sum += arr[i];   //total array_sum
        arr[i] = arr[i] * -1;        //inverting array and then apply kadanes to get minimum subarray sum.
    }

    int normal_sum_min = kadanes(arr, n);      //to get min subarray sum

    int circular_sum_max = normal_sum_min + total_array_sum;

    return max(circular_sum_max, normal_sum_max);
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