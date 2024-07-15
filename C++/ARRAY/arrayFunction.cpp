#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    int n = size;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    //write your code here
    int arr[5] = {10, 20, 30, 40, 50};
    printArray(arr, 5);

    return 0;
}