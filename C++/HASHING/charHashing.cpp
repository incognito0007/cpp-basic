#include<bits/stdc++.h>
using namespace std;

int main() {
    //write your code here
    string s = "anananaofhfhdljrwedfdsfutadlisdydwhgftycsafwtiwdfyqdrdfdtidwfdqdqdwfutqdwduydfwrqdwydwiydwugdwuuwdfdw";
    int hash[256] = {0};

    for(int i = 0; i<s.size(); i++){
        hash[s[i]]++;
    }
    cout<<hash[97];
    return 0;
}