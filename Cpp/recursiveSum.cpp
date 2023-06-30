#include<iostream>
using namespace std;

int getSum(int *arr, int size) {

    int sum = 0;

    if(size == 0) {
        return 0;
    }
    if(size == 1) {
        return arr[0];
    }

    int smallerProblem = getSum(arr + 1, size - 1);
    int biggerProblem = arr[0] + smallerProblem;

    return biggerProblem;

}

int main() {
    
    int arr[5] = {11, 12, 13,14, 15};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "Sum of all the elements of an Array is: " << sum << endl;
    
    return 0;
}