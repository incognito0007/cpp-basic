#include<bits/stdc++.h>
using namespace std;

void printNTimes(int n){

    if(n==0) return;

    cout<<"Ankit"<<" ";
    n--;
    printNTimes(n);

}

int main() {
    //write your code here

    int n;
    cin>>n;

    printNTimes(n);
    return 0;
}