#include<iostream>
using namespace std;

int main() {
    
    //This is a bad practice because it is pointing to some random memory block in the memory ans will store some garbage value.
    //int *p;
    int num = 5;

    // int * ptr = &num;

    // //Below declaration of pointer is same as that of below mentioned pointer.
    // int * ptr1 = 0;
    // ptr1 = &num;
    // cout<<"Value of num: "<<*ptr1<<endl; //*ptr1 will give value of the address pointed by ptr1.
    // cout<<"Address of the num: "<<ptr1<<endl;
    

    // //Invalid Syntax
    // // int * ptr2 = num; 

    // cout<<"Value of num: "<<*ptr<<endl; //*ptr will give value of the address pointed by ptr.
    // cout<<"Address of the num: "<<ptr<<endl;

    //copying value of pointer to another poointer

    int * p = &num;

    int * q = p;
    //This is a invalid conversion from int* to int
    // int * q = *p;

    // cout<<p<<" - "<<q<<endl;
    // cout<<*p<<" - "<<*q<<endl;

    //Increasing the value of pointer
    // cout<<"Before: "<<*p<<endl;
    // cout<<"Before: "<<p<<endl;
    // ( p )++;  //Invalid Syntax: ( p )++; not so invalid it will rather increase the address of the pointer by the size of the datatype.

    // cout<<"After: "<<p<<endl;

    // cout<<"After: "<<*p<<endl;

    // cout<<"Value at p: "<<*p<<endl; this will give the garbage value 

    // cout<<"Value of p is:"<< ++( * p ) <<endl;

    int arr[] = {1, 2, 3, 4};

    int * ptr = (arr + 1);

    cout<<ptr + 1<<endl;

    return 0;
}