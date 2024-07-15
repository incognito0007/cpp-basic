#include<bits/stdc++.h>
using namespace std;

int main() {
    //write your code here
    list<int> ls;
    ls.push_back(12);
    ls.push_back(5);
    ls.push_front(3);
    for(auto it : ls){
        cout<<it<<" ";
    }
    return 0;
}