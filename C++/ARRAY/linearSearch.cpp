#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int n, int num){
    for(int i = 0; i < n; i++){
        if(arr[i] == num) return true;
    }
    return false;
}



int main() {
    //write your code here

    int arr[10] = {21, 23, 43, 11, 44, 15, 28, 29, 53, 27};

    cout<<search(arr,10, 12);
    cout<<search(arr,10, 27);

    return 0;
}