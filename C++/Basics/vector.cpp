#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> ans;
    ans.push_back(5);
    ans.push_back(1);
    ans.push_back(3);
    for(auto it : ans){
        cout<<it<<" ";
    }
    int arr[3];
    for(int i = 0; i<3; i++){
        arr[i] = ans[i];
    }
    for(int i = 0; i < 3; i++){
        cout<<arr[i]<<" ";
    }
}