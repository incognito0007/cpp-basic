#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternates(int arr[], int n){
    for(int i = 0; i < n; i+=2){
        if(i+1 < n) swap(arr[i], arr[i+1]);
    }

    printArray(arr, n);
}

int main() {
    //write your code here
    int arrA[5] = {1,2,3,4,5};
    int arrB[6] = {1,2,3,4,5,6};
    swapAlternates(arrA, 5);
    swapAlternates(arrB, 6);

    return 0;
}