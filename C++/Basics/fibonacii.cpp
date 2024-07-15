#include<bits/stdc++.h>
using namespace std;

int main() {
    //write your code here

    int n;
    cin>>n;
    vector<int> ans(n, 0);

    for(int i = 0; i<n; i++){
        if(i==0){
            ans[i] = 0;
        }else if(i==1){
            ans[i] = 1;
        }else{
            ans[i] = ans[i-1] + ans[i-2];
        }
    }

    for(auto it : ans){
        cout<<it<<" ";
    }

    return 0;
}