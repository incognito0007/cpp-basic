#include<bits/stdc++.h>
using namespace std;

void reverse(string &dupstr, int start, int end){
    if(start > end) return;

    swap(dupstr[start], dupstr[end]);
    reverse(dupstr, start+1, end-1);
}

bool stringPlindrome(string &str){
    int n = str.size();
    string dupstr = str;
    int start = 0, end = n-1;

    reverse(dupstr, 0, n-1);
    if(dupstr == str) return true;
    return false;
}

int main() {
    //write your code here
    string str = "racecat";
    cout<<stringPlindrome(str);
    return 0;
}