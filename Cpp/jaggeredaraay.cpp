#include<iostream>
using namespace std;

int main() {

    int row, col;

    cin >> row;

    int i = 0, j = 0;

    int ** arr = new int * [row];

    for(i=0; i<row; i++) {
        cin >> col;

        for(j=0; j<col; j++) {
            arr[i] = new int[j];
        }
    }

    for(i=0; i<row; i++) {
        // cin>>col;
        for(int k=0; k<j; k++) {
            cin >> arr[i][k];
        }
    }

    for(i=0; i<row; i++) {
        // cin>>col;
        for(int k=0; k<j; k++) {
            cout << arr[i][k] << " ";
        }cout<<endl;
    }


    // for(i=0; i<row; i++) {
    //     delete [] arr[i];
    // }

    // delete [] arr;


}