#include<iostream>
using namespace std;

bool isSorted(int *arr, int size) {

    if(size == 0 || size == 1) {
        return true;
    }
    else {
        if(arr[0] > arr[1]) {
            return false;
        }
        else {
            bool remainingPart = isSorted(arr+1, size - 1);
            return remainingPart;
        }
    }

}

int main() {
    
    int arr[5] = {2, 3, 44, 5, 6};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans) {
        cout << "Sorted Array" << endl;
    }
    else {
        cout << "Un-sorted Array" << endl;
    }
    
    return 0;
}