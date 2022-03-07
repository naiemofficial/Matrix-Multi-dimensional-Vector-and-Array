#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Transpose matrix is interchanging its rows into columns or columns into rows (A = A' (or A^T))
    vector <vector<int>> A = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    vector <vector<int>> B (A[0].size(), vector <int> (A.size()));

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
    cout << "\nTranspose matrix: " << endl;
    for (int row = 0; row < B.size(); row++) {
        for (int col = 0; col < B[row].size(); col++) {
            cout << "\t" << B[row][col];
        }
        cout << endl;
    }
}