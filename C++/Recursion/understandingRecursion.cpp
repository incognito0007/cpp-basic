#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

void getOne() {
    if(cnt == 3) return;
    cnt++;
    cout<<cnt<<" ";
    getOne();
}

int main() {
    //write your code here

    getOne();
    return 0;
}