#include<bits/stdc++.h>
using namespace std;

vector<int> push(vector<int> &ans, int i, int n){

    if(i == n) return ans;
    if(i == 0){
        ans.push_back(0);
    }
    else if(i==1){
        ans.push_back(1);
    }
    else{
        ans.push_back(ans[i-1]+ans[i-2]);
    }

    return push(ans, i+1, n);
}

vector <int> fibonacciSeries(int n){
    vector<int> ans;
    int i = 0;
    push(ans, i, n);
    for(auto it : ans){
        cout<<it<<" ";
    }
    return ans;

}

int main() {
    //write your code here
    int n;
    cin>>n;
    fibonacciSeries(n);
    return 0;
}