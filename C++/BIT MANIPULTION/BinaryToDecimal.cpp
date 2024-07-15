#include<bits/stdc++.h>
using namespace std;

int main() {
    //write your code here
    int n;
    cin>>n;
    
    int ans = 0, i = 0;

    while(n != 0){
        int  digit = n % 10;
        if(digit == 1){
            ans = ans + (pow(2, i));
        }
        n = n/10;
        i++;
    }
    cout<<ans;
    return 0;
}