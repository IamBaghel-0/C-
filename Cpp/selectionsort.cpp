#include<bits/stdc++.h>
using namespace std;

void sort(int *arr, int s, int n) {

    cout<<"Unsorted array: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    if(n == 0 || n == 1) {
        return;
    }

    int minEle = INT_MAX;


    for(int i=0; i<n; i++) {
        minEle = min(minEle, arr[i]);
        cout<<minEle<<endl;

        for(int j=i+1; i<n; i++) {
            swap(arr[i], minEle);
            cout<<arr[i]<< " ";
        }   
    }
    cout<<endl;

    sort(arr, s+1, n-1);
}

int main() {
    
    int arr[] = {23, 45, 40, 34, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, 0, n);

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout << endl;
    
    return 0;
}