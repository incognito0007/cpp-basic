#include<bits/stdc++.h>
using namespace std;

void oneToN(int cnt, int n){
    if(n==0) return;

    cout<<cnt<<endl;

    oneToN(cnt+1, n-1);
}

int main() {
    //write your code here
    int cnt = 1;
    int n;
    cin>>n;

    oneToN(cnt, n);
    return 0;
}