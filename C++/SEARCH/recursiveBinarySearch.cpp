#include<bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(int arr[], int low, int high, int target){
    if(low > high) return -1;

    int mid = (low+high)/2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] < target) recursiveBinarySearch(arr, mid+1, high, target);
    else recursiveBinarySearch(arr, low, mid-1, target);
}

int main() {
    //write your code here
    int arr[10] = {2,4,6,9,12,15,16,20,24,25};
    cout<<recursiveBinarySearch(arr, 0, 9, 4);
    cout<<endl;
    cout<<recursiveBinarySearch(arr, 0, 9, 24);
    cout<<endl;
    cout<<recursiveBinarySearch(arr, 0, 9, 32);
    cout<<endl;
    return 0;
}