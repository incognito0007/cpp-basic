#include<bits/stdc++.h>
using namespace std;

void nToOne(int n){
    if(n==0) return;
    cout<<n<<endl;
    nToOne(n-1);
}

int main() {
    //write your code here
    int n;
    cin>>n;
    nToOne(n);
    return 0;
}