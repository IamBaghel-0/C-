#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int idx, int len) {
    // idx = 0;
    if(idx == len - 1) {
        return true;
    }

    bool smallProblem = isSorted(arr, idx + 1, len);
    return smallProblem & arr[idx] <= arr[idx + 1];
}

int main() {
    
    int arr[] = {2, 10, 4, 5, 6, 7, 8};
    int len = *(&arr + 1) - arr;

    cout<< isSorted(arr, 0, len) <<endl;

    return 0;
}