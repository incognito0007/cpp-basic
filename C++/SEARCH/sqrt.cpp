#include<bits/stdc++.h>
using namespace std;

long long int sqrtInteger(int n){
    int s = 0;
    int e = n;
    long long int ans = -1;

    while(s<=e){
        long long int mid = s + (e-s)/2;
        long long int square = mid*mid;

        if(square > n) e = mid-1;
        else if(square < n){
            ans = mid;
            s = mid+1;
        }
        else{
            return mid;
        }
    }
    return ans;
}

double preciseSol(int n, int tempSol, int precision){
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i<precision; i++){
        factor = factor/10;

        for(double j = ans; j*j<n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<endl;

    int tempSol = sqrtInteger(n);
    cout<<"square root of the number is : "<<preciseSol(n, tempSol, 3);

    return 0;
}