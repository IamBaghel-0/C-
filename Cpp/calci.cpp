#include<iostream>
using namespace std;

int main() { 
    cout<<"Choose Operation to be performed: "<<endl;
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo"<<endl;

    int operation;
    cin>>operation;

    int a, b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;

    switch (operation)
    {
        case 1: 
        cout<<"You have choosen Addition: "<<a+b<<endl;
        break;

        case 2: 
        cout<<"You have choosen Subtraction: "<<a-b<<endl;
        break;

        case 3:
        cout<<"You have choosen Multiplication: "<<a*b<<endl;
        break;

        case 4:
        cout<<"You have choosen Division: "<<a/b<<endl;
        break;

        case 5:
        cout<<"You have choosen Modulo: "<<a%b<<endl;
        break;
    }

    return 0;
}