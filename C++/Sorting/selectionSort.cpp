#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int minm = i;
        for(int j=i; j<=n-1;j++){
            if(arr[j]<arr[minm]) minm = j;
        }
        swap(arr[i],arr[minm]);
    }
}

int main() {
    
    // int n;
    // cout<<"enter the size of array you want: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    int arr[7] = {2, 13, 4, 1, 3, 6, 28};
    int n = 7;

    selection_sort(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}