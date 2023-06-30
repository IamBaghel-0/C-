#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
     
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void reverse (int arr[], int n) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }

}

int main() {
    
    int arr[6] = {12, 34, 45, -12, 11, 8};
    int arr1[5] = {1, 2, 3, 4, 5};

    reverse(arr, 6);
    reverse(arr1, 5);

    printArray(arr, 6);
    printArray(arr1, 5);
    
    return 0;

}