#include<iostream>
using namespace std;

int main() {
    
    // int i = 56;
    // int * ptr = &i;
    // int ** ptr2 = &ptr;


    // // cout << "Printing value of ptr: " <<  ptr << endl;
    // // cout << "Printing value of i using ptr: " << *ptr <<endl;
    // // cout << "Printing value of ptr2: " << ptr2 << endl;
    // // cout << "Printing value of ptr using ptr2: " << *ptr2 <<endl;

    // // cout << "Printing value of i using ptr2: " << **ptr2 <<endl;
    int  first = 6;
    int * p = &first;
    cout<<&p<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    int * q = p;
    
    (*q)++;    

    cout<<first<<endl;
    return 0;
}