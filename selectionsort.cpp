#include<iostream>
using namespace std;

int main()
{
    int n;  //Declaring the size of an array
    cin>>n;

    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)  //we are selecting two arrays within the array first from 0 index to n-1 index and the other one from 1 index to last one
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];  //Swaping the smallest element with the first element of the array
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}
