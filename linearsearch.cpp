#include<iostream>
using namespace std;

//Declaration of function to find the key 
int linearsearch(int arr[], int n, int key) //int datatype is choosen because we have to return the index of the key
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            return i; //returning index of the key
        }
    }
    return -1; //if the key which we have entered is not present in an array
}

int main()
{
    int n; //size of an array
    cin>>n;

    int arr[n]; //array declaration
    for(int i=0; i<n; i++)
    {
        //Taking inputs for array elements
        cin>>arr[i];
    }

    int key; //element which we have to find in an array
    cin>>key;

    cout<<linearsearch(arr,n,key);

    return 0;
}
