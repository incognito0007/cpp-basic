#include<bits/stdc++.h>
using namespace std;

bool uniqueOcc(int arr[], int n){
    unordered_map<int, int> mpp;
    set<int> s;

    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    for(auto i : mpp){
        s.insert(i.second);
    }

    if(mpp.size()==s.size()) return true;
    return false;
}

int main() {
    //write your code here
    int arrA[6] = {1, 2, 2, 3, 3, 3};
    int arrB[7] = {1, 2, 2, 2, 3, 3, 3};
    cout<<uniqueOcc(arrA, 6)<<endl;
    cout<<uniqueOcc(arrB, 7);
    return 0;
}