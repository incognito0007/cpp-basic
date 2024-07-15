#include<bits/stdc++.h>
using namespace std;

int arraySum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return sum;
}

int main() {
    //write your code here
    int arr[5] = {2, 4, 6, 8, 10};
    cout<<arraySum(arr, 5);
    return 0;
}