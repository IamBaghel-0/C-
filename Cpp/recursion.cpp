#include<iostream>
using namespace std;

int factorial (int n) {

    //base case
    if(n == 0 ) {
        return 1;
    }

    //recursive relation
    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;

}

int power(int n) {

    //base case
    if(n == 0) {
        return 1;
    }

    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;
}

void print (int n) {

    if(n == 0) {
        return;
    }

    // cout<< n << endl;

    print(n-1);

    cout<< n << endl;
}

long long int fibo(int n) {
    if(n <= 1) {
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}

int main() {

    int n;
    cin >> n;

    // int ans = power(n);

    // cout<<ans<<endl;
    int ans = factorial(n);
    cout<<factorial(n)<<endl;
    // for(int i=0; i<n; i++) {
    //     cout<<fibo(i)<<" ";
    // }
    cout<<endl;
}