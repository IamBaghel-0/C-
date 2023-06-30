#include<bits/stdc++.h>
using namespace std;

void Merge(int *arr, int s, int e) {

    int mid = (s + e)/2;
    
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int MergedArrayIndex = s;

    for(int i=0; i<len1; i++) {
        arr1[i] = arr[MergedArrayIndex++];
    }

    MergedArrayIndex = mid + 1;
    for(int i=0;i<len2; i++) {
        arr2[i] = arr[MergedArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    MergedArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(arr1[index1] < arr2[index2]) {
            arr[MergedArrayIndex++] = arr1[index1++];
        }
        else {
            arr[MergedArrayIndex++] = arr2[index2++];
        }
    }

    while(index1 < len1) {
        arr[MergedArrayIndex++] = arr1[index1++];
    }
    
    while(index2 < len2) {
        arr[MergedArrayIndex++] = arr2[index2++];
    }

    delete []arr1;
    delete []arr2;
}

void MergeSort(int *arr, int s, int e) {

    if( s >= e )  {
        return;
    }

    int mid = (s + e)/2;

    // Left Part sort
    MergeSort(arr, s, mid);

    // Right Part sort
    MergeSort(arr, mid+1, e);

    Merge(arr, s, e);
}

int main() {
    
    int arr[10] = {12, 43, 98, 78, 23, 45, 71, 62, 90, 49};

    MergeSort(arr, 0, 9);

    for(int i=0; i<10; i++) {
        cout<< arr[i] << " ";
    }cout<<endl;
    
    return 0;
}