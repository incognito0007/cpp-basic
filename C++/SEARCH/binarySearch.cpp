#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int low = 0;
    int high = n-1;

    while(low <= high) {
        int mid = (low+high)/2;

        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid+1;
        else high = mid-1;
    }
    
    return -1;
}

int main() {
    //write your code here

    int arr[10] = {2,4,6,9,12,15,16,20,24,25};
    cout<<binarySearch(arr, 10, 4);
    cout<<endl;
    cout<<binarySearch(arr, 10, 24);
    cout<<endl;
    cout<<binarySearch(arr, 10, 32);
    cout<<endl;
    return 0;
}