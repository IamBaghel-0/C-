#include<bits/stdc++.h>
using namespace std;

bool search (int arr[], int key, int low, int high, int n) {
    
    // sort(arr, arr+n);
    
    // int low = arr[0];
    
    // int high = arr[n-1];
    
  if(low > high) {
      return false;
  }
    
     
        int mid = (low+high)/2;
        
        if(key == arr[mid]) {
            return mid;
        }
        
        else if(key > arr[mid]) {
            return search(arr, key, mid+1, high, high-mid-1);
        }
        else{
            return search(arr, key, low, mid-1, low-mid+1);
        }
 
    return true;
}

// bool search (int arr[], int n, int)

int main() {
    
    int n;
    cin>>n;
    
    
    int key;
    cin>>key;
    
    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    cout<<search(arr, key, 0, n, n);
    
}