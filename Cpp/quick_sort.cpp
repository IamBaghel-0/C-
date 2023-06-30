#include<bits/stdc++.h>
using namespace std;

int Partition(int *arr, int s, int e) {
    
    //Pivot index
    int pivot= s;

    int count = 0;
    for(int i=s+1; i<=e; i++) {
        if(arr[i] < arr[pivot]) {
            count++;
        }
    }

    pivot= s + count;

    swap(arr[s], arr[pivot]);

    int i = s, j = e;

    while(i < pivot&& j > pivot) {

        while(arr[i] < arr[pivot]) {
            i++;
        }
        
        while(arr[j] > arr[pivot]) {
            j--;
        }

        if(arr[i] > arr[j]) {
            swap(arr[i], arr[j]); 
            i++;
            j--;
        }

    }

    return pivot;
}

void QuickSort(int *arr, int s, int e) {
    // Base Condition
    if(s >= e) {
        return;
    }

    int pivot= Partition(arr, s, e);

    QuickSort(arr, s, pivot-1);
    QuickSort(arr, pivot+1, e);
}

int main() 
{

    int arr[5] = {12, 43, 23, 9, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, 4);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " "; 
    } cout << endl;

    return 0;
}