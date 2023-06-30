#include<iostream>
using namespace std;

int main() {

    //For same no of rows and columns
    // int n;
    // cin >> n;

    // int ** arr = new int * [n];

    // for(int i=0; i<n; i++) {
    //     arr[i] = new int [n];
    // }

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         cin >> arr[i][j];
    //     }
    // }

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         cout << arr[i][j] << " ";
    //     }cout<<endl;
    // }

    //for different no of rows and columns
    //Jaggered Array

    int rows;
    cout << "Enter no of rows in the 2D-Array: ";
    cin >> rows;

    int * cols = new int[rows];
    // cin >> cols;

    int ** arr = new int * [rows];

    for(int i = 0; i < rows; i++) {
        cout << "Enter no of elements in " << i << " row: ";
        cin >> cols[i];
    }

    for(int i = 0; i < rows; i++) {
        arr[i] = new int [cols[i]];
    }

    for(int i = 0; i < rows; i++) {
        cout<< "Enter elements of " << i <<" row --> ";
        for(int j = 0; j < cols[i]; j++) {
            cin >> arr[i][j];
        }
    }

    cout<<"The input 2D-Array will look like:"<<endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols[i]; j++ ) {
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    // cout<<sizeof(arr);
    for(int i = 0; i < rows; i++) {
        delete [] arr[i];
    }
    delete [] arr;
    // cout<<sizeof(arr);


    return 0;
}