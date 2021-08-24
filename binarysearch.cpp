#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){  
    //function to find the key in the array
    int start=0;  //pointing to the first element of the array
    int end=n;  //pointing to the last element of the array

    while(start<=end)
    {
        int mid=(start+end)/2;  //pointing to the middle index of the array
            if(arr[mid]==key){
                return 1;
        }
        else if(arr[mid]>key){
            end=mid-1;  //shifting the end pointer to the previous index of the middle index
        }
        else if(arr[mid]<key)
        {
            start=mid+1; //shifting to start pointer to the next index of the middle index;
        }
    }
    return -1;  //key not found in the array
}

int main()
{
    int n;  //size of an array
    cin>>n;

    int arr[n];  //array declaration
    for(int i=0; i<n; i++) 
    {
        //taking array inputs from the user
        cin>>arr[i];
    }
    int key; //Element which we have to find in the array
    cin>>key;

    cout<<binarysearch(arr, n ,key)<<endl;

    return 0;
}
