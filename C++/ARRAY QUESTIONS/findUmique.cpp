#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main() {
    //write your code here

    int arr[7] = {2, 7, 7, 3, 6, 3, 2};
    cout<<findUnique(arr, 7);
    return 0;
}