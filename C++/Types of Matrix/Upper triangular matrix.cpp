#include <iostream>
#include <vector>
using namespace std;

int main(){
    // (3row X 3columns)        // ╔═══╦═══╦═══╗
    vector <vector<int>> A = {  // ║ 1    2    3 ║
        { 1, 2, 3 },            // ╠═══╬═══╬═══╣
        { 0, 5, 6 },            // ║      5    6 ║
        { 0, 0, 9 }             // ╠═══╬═══╬═══╣
    };                          // ║           9 ║
                                // ╚═══╩═══╩═══╝
    if(A.size() == A[0].size()){
        cout << "Upper Triangular matrix: " << endl;
        int sum = 0; bool error = false;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                if(row <= col){
                    sum += A[row][col];
                } else if (A[row][col] != 0) {
                    error = true;
                }
                cout << "\t" << A[row][col];
            }
            cout << endl;
        }
        cout << "Sum of upper triangular matrix is = " << sum << endl;
        if (error) cout << "=> Invalid Upper Triangular matrix." << endl;
    } else {
        cout << "Error! Number of rows and columns must be same." << endl;
    }
}