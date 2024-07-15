#include<bits/stdc++.h>
using namespace std;

vector<int> allDuplicates(int arr[], int n){
    unordered_map<int, int> m;

    for(int i = 0; i < n; i++){
        m[arr[i]]++;
    }

    vector<int> ans;

    for(auto i : m){
        if(i.second >= 2) ans.push_back(i.first);
    }

    for(auto i : ans){
        cout<<i<<" ";
    }

    cout<<endl;

    return ans;
}

int main() {
    //write your code here

    int arrA[5] = {1, 3, 3, 2, 1};
    int arrB[10] = {3, 7, 7, 4, 3, 2, 3, 1, 4, 8};

    allDuplicates(arrA, 5);
    allDuplicates(arrB, 10);
    return 0;
}