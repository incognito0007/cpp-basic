#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n, int sum){
    if(n==0) return sum;

    sum = sum + n;

    sumOfN(n-1, sum);
}

int main() {
    //write your code here
    int n;
    cin>>n;
    int sum = 0;
    cout<<sumOfN(n, sum);
    return 0;
}