#include<iostream>
using namespace std;

bool search(int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {

    int size;
    cin>>size;

    int arr[100];

    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    cout<<search(arr, 5, 4)<<endl;


    return 0;
}