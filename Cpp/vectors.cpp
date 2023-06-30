#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};

    for(int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    nums.pop_front();
    int n = nums.size();
    for(int i=0; i<n; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}