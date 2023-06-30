#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    // Validate the input
    if (num <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 0;
    }

    // Display the pattern
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
