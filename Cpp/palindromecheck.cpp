#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int s) {

    int n = str.length();
    if(s > n/2) {
        return true;
    }

    if(str[s] != str[n-s-1]) {
        return false;
    }
    else {
        return isPalindrome(str, s+1);
    }

}

int main() {

    string str;
    cin >> str;

    bool check = isPalindrome(str, 0);

    if(check) {
        cout<< "It is Plaindrome" << endl;
    }
    else {
        cout<< "It is not Palindrome" << endl;
    }

    return 0;
}