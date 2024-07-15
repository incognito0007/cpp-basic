#include<bits/stdc++.h>
using namespace std;

void callingVector(vector<int> &v){
    for(auto it : v){
        cout<<it<<" ";
    }
}

int main() {
    //write your code here
    vector<int> v = {12, 5, 17, 18, 19};
    v.push_back(19);
    v.pop_back();
    callingVector(v);
    return 0;
}