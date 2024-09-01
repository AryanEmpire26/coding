#include<bits/stdc++.h>
using namespace std;
int partition_L(int arr[],int l,int h){     //using LUMUTO Patition
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

int partition_H(int arr[],int l,int h){  // using HOARE Partition
    int pivot=arr[l];
    int i=l-1;
    int j=h+1;
    while(true){

    
    do
    {
        i++;
    } while (arr[i]<pivot);
    do
    {
        j--;
    } while (arr[j]>pivot);
    if(i>=j)return j;
    swap(arr[i],arr[j]);
    }
    
}

void qSort_L(int arr[],int l,int h){   //quick sort using Lamuto partition
    if(l<h){
        int p=partition_L(arr,l,h);
        qSort_L(arr,l,p-1);
        qSort_L(arr,p+1,h);
    }
}

void qSort_H(int arr[],int l,int h){  //quick sort using Hoare patition
    if(l<h){
        int p=partition_H(arr,l,h);
        qSort_H(arr,l,p);
        qSort_H(arr,p+1,h);
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
    qSort_H(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    qSort_L(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}