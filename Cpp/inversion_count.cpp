#include<iostream>
using namespace std;

int InversionCount(int *arr, int n) {

    int inversionCount = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[i])
                inversionCount++;
        }
    }

    return inversionCount;

}

int main() {

    int arr[5] = {23, 54, 21, 19, 78};

    cout<<InversionCount(arr, 5)<<endl;

    return 0;
}