#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Symmetric matrix is, if the transpose of that matrix is equal to itself (A' = A)
    vector <vector<int>> A = {
        { 1, 2, 3 },
        { 2, 4, 5 },
        { 3, 5, 6 }
    };
    vector <vector<int>> B (A.size(), vector <int> (A[0].size()));

    if (A.size() == A[0].size()) {
        cout << "Matrix: " << endl;
        // Transpose here to B[][] using for loop
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                B[col][row] = A[row][col];
                cout << "\t" << A[row][col];
            }
            cout << endl;
        }

        // Print transposed matrix
        cout << "\nSymmetric matrix: " << endl;
        for (int row = 0; row < B.size(); row++) {
            for (int col = 0; col < B[row].size(); col++) {
                cout << "\t" << B[row][col];
            }
            cout << endl;
        }
    } else {
        cout << "Error! Number of rows and columns must be same" << endl;
    }
}