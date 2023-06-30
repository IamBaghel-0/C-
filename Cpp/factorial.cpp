#include<iostream>
#define m 10^9 + 7
using namespace std;

int factorial(int n) {
    long long int res = 1;

    for(int i=1; i<=n; i++) {
        res = ((res) * (i)%m)%m;
    }

    return res;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Factorial of Number "<<n<<" is " <<factorial(n)<<endl;
    
    return 0;

}