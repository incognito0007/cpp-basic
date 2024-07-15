#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int arr[], int n){
    // int temp[5];

    // for(int i = 0; i < n; i++){
    //     temp[i] = arr[n-i-1];
    // }

    // printArray(temp, n);

    int start = 0, end = n-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start += 1;
        end -= 1;
    }
    printArray(arr, n);
}




int main() {
    //write your code here
    int arr[5] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    return 0;
}