#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Square matrix is that rows and columns number is same
    vector <vector<int>> A = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    if (A.size() == A[0].size()) {
        cout << "Square matrix: " << endl;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout << "\t" << A[row][col];
            }
            cout << endl;
        }
    } else {
        cout << "Error! This isn't an square matrix. Number of rows and columns must be same" << endl;
    }
}