#include <iostream>
#include <vector>
using namespace std;

int main(){
    // (3row X 3columns)        // ╔═══╦═══╦═══╗
    vector <vector<int>> A = {  // ║ 1           ║
        { 1, 0, 0 },            // ╠═══╬═══╬═══╣
        { 4, 5, 0 },            // ║ 4    5      ║
        { 7, 8, 9 }             // ╠═══╬═══╬═══╣
    };                          // ║ 7    8    9 ║
                                // ╚═══╩═══╩═══╝
    if (A.size() == A[0].size()) {
        cout << "Lower Triangular matrix: " << endl;
        int sum = 0; bool error = false;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                if (row >= col) {
                    sum += A[row][col];
                } else if (A[row][col] != 0){
                    error = true;
                }
                cout << "\t" << A[row][col];
            }
            cout << endl;
        }
        cout << "Sum of lower triangular matrix is = " << sum << endl;
        if (error) cout << "=> Invalid Lower Triangular matrix." << endl;
    } else {
        cout << "Error! Number of rows and columns must be same." << endl;
    }
}