#include<bits/stdc++.h>
using namespace std;
int cntandmerge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1, n2 = r - m;
    int res = 0;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[i + l];
    }

    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[j + 1 + m];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 and j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
            res = res + (n1 - i);
        }
    }
    while (i < n1)
    {
        arr[k++] = left[i++];
    }
    while (j < n2)
    {
        arr[k++] = right[j++];
    }
    return res;
}
int cntinv(int arr[],int l,int r){
    int res=0;
    if(l<r){
        int mid=l+(r-l)/2;
        res+=cntinv(arr,l,mid);
        res+=cntinv(arr,mid+1,r);
        res+=cntandmerge(arr,l,mid,r);

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
    cout<<cntinv(arr, 0, n - 1);
    
    return 0;
}