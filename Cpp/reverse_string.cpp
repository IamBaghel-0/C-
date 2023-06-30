#include<bits/stdc++.h>
using namespace std;

void reverse (string &str, int start) {

    int n = str.length();
    if(start > n/2) { 
        return;
    }

    // int n = str.length();

    swap(str[start], str[n - start - 1]);
    start++;
    reverse(str, start);

}

int main() {
    
    string str;
    cout<< "Enter the string: ";
    cin>>str;
    
    reverse(str, 0);

    cout<< str <<endl;

    return 0;
}