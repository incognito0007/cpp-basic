#include<bits/stdc++.h>
using namespace std;

int main() {
    //write your code here
    int arr[5] = {1, 2, 1, 3, 2};

    unordered_map<int, int> mpp;
    for(int i = 0; i < 5; i++){
        mpp[arr[i]]++;
    }
    cout<<mpp[2];
    return 0;
}