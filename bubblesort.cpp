#include<iostream>
using namespace std;

int main()
{
    int n; //Decalring the size of the array
    cin>>n;

    int arr[n];  //Declaring the array
    for(int i=0; i<n; i++)
    {
        //Taking input for the array from the user
        cin>>arr[i];
    }

    int counter=1;  //Declare to count the number of iterations perform in the array
    while(n>counter){
        for(int i=0; i<n-counter; i++)  //n-counter because after iteration the largest of all the element present in the subarray get positioned at the last
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];  //swapping the smallest element with largest one till the last iterartion
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
