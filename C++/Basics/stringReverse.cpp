#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    cout<<str<<endl;
    // cout<<str.size()<<endl;
    // cout<<str[4];

    int n = str.size();
    cout<<n<<endl;

    int i = 0;

    while(i<n){
        swap(str[i], str[n-1]);
        i = i+1;
        n = n-1;
    }
    
    cout<<str;

    return 0;
}