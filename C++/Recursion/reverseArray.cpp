#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &nums, int start, int end){
    if(start>end) return;

    swap(nums[start], nums[end]);
    reverse(nums, start+1, end-1);
}

vector<int> reverseArray(vector<int> &nums, int n){
    int start = 0;
    int  end = n-1;

    reverse(nums, start, end);
    return nums;

}

int main() {

    vector<int> nums = {3, 1, 1, 7, 4, 2, 6, 11};

    int n = 8;

    reverseArray(nums,n);
    for(auto it : nums) {
        cout<<it<<" ";
    }

    return 0;
}