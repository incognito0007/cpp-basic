#include<bits/stdc++.h>
using namespace std;

int pivotElement(int arr[], int n){
    int s = 0, e = n-1;
    int mid;
    while(s<e){
        mid = (s+e)/2;

        if(arr[mid] >= arr[0]) s = mid+1;
        else e = mid;
    }
    return s;
}

int main() {
    //write your code here

    int arr[6] = {9, 11, 1, 3, 5, 7};

    cout<<pivotElement(arr, 6);
    return 0;
}