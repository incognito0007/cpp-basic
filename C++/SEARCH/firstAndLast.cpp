#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int target, int n){
    int low = 0, high = n-1, ans = n;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] >= target){
            high = mid - 1;
            ans = mid;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int upperBound(int arr[], int target, int n){
    int low = 0, high = n-1, ans = n;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] > target){
            high = mid - 1;
            ans = mid;
        }
        else{
            low = mid + 1;
        }
    }

    return ans-1;
}

vector<int> firstAndlast(int arr[], int target, int n){
    vector<int> ans;

    ans.push_back(lowerBound(arr, target, n));
    ans.push_back(upperBound(arr, target, n));

    for(auto i : ans){
        cout<<i<<" ";
    }
}

int main() {
    //write your code here

    int arr[10] = {1, 2, 2, 3, 3, 7, 8, 9, 9 , 9};

    firstAndlast(arr, 9, 10);
    return 0;
}