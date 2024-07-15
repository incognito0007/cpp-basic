#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }

    for(int i = 1; i < n; i++){
        ans = ans ^ i;
    }
    return ans;
}

int main() {

    //write your code here
    int arr[8] = {3, 5, 1, 2, 6, 7, 4, 5};
    cout<<findDuplicate(arr, 8);
    return 0;
}