#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Scaler matrix is if the diagonal elements are same number and other elements are zero.
    vector <vector<int>> A = {
        { 5, 0, 0 },
        { 0, 5, 0 },
        { 0, 0, 5 }
    };

    if (A.size() == A[0].size()) {
        cout << "Scaler matrix: " << endl;
        bool error = false; int sameCount = 0;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout << "\t" << A[row][col];
                if(row != col && A[row][col] != 0) error = true;
                if((row == col && row != 0 && col != 0) && (A[row-1][col-1] == A[row][col])){
                    sameCount++;
                }
            }
            cout << endl;
        }
        if(error || sameCount+1 != A.size()) cout << "=> This isn't a scaler matrix." << endl;
    } else {
        cout << "Error! This isn't an Scaler matrix. Number of rows and columns must be same" << endl;
    }
}