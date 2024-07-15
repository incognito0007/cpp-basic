#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    int n = size;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void sort01(int arr[], int n){
    int left = 0;
    int  right = n-1;

    while(left < right){
        if(arr[left] == 0) left++;
        else if(arr[right] == 1) right--;
        else{
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        
    }
    printArray(arr, n);
}

int main() {
    //write your code here
    int arr[8] = {1, 1, 1, 0, 0, 0, 0, 0};
    sort01(arr, 8);
    return 0;
}