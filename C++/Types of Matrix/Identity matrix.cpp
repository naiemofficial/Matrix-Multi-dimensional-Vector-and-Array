#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Identity matrix is if the diagonal elements are 1 and other elements are zero.
    vector <vector<int>> A = {
        { 1, 0, 0 },
        { 0, 1, 0 },
        { 0, 0, 1 }
    };

    if (A.size() == A[0].size()) {
        cout << "Identity matrix: " << endl;
        bool error = false;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout << "\t" << A[row][col];
                if((row != col && A[row][col] != 0) || (row == col && A[row][col] != 1)) error = true;
            }
            cout << endl;
        }

        if (error) cout << "=> Invalid Identity Matrix." << endl;
    } else {
        cout << "Error! This isn't an Identity matrix. Number of rows and columns must be same" << endl;
    }
}