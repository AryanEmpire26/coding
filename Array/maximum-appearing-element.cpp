#include<bits/stdc++.h>
using namespace std;
int solver(int left[],int right[],int n){
    int freq[101]={0};
    for(int i=0;i<n;i++){
        freq[left[i]]++;
        freq[right[i]+1]--;
    }
    int res=0;
    for(int i=1;i<100;i++){
        freq[i]=freq[i]+freq[i-1];

        if(freq[res]<freq[i]){
            res=i;
        }
    }
    return res;

}
int main(){
    int n;
    cin >> n;
    int left[n];
    for (int i = 0; i < n; i++)
    {
        cin >> left[i];
    }
    int right[n];
    for (int i = 0; i < n; i++)
    {
        cin >> right[i];
    }
    cout << solver(left,right, n);
    return 0;
}