#include<bits/stdc++.h>
using namespace std;

int main() {
    //write your code here

    map<int, int> mpp;
    mpp.insert({2,4});

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}