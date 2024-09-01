#include <bits/stdc++.h>
using namespace std;
void bsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int swapped=false; //if arr is sorted using swapped variable reduce time complexity to o(n).
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped=true;
            }
        }
        if(swapped==false) break;
    }

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
    bsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}