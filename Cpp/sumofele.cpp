#include<iostream>
using namespace std;

int sum (int *arr, int size) {
    if(size == 0) {
        return 0;
    }
    if(size == 1) {
        return arr[0];
    }

    int RemainingPart = sum(arr+1, size-1);
    int sum = arr[0] + RemainingPart;

    return sum;
}

int main() {

    // int size;
    // cin>>size;

    int arr[7] = {2, 3, 4, 5, 6, 7, 8};

    cout << sum(arr, 7) << endl;

    return 0;
}