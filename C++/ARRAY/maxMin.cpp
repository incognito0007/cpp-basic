#include<bits/stdc++.h>
using namespace std;

void maxMin(int arr[], int n){
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout<<min<<" "<<max;

    // return{min, max};
}

int main() {
    //write your code here
    int arr[7] = {12,17,11,19, 28, 27, 32};
    maxMin(arr, 7);
    return 0;
}