#include <iostream>
#include <vector>
using namespace std;

vector <vector<int>> matrixMultiply(vector <vector<int>> A, vector <vector<int>> B) {
    vector <vector<int>> result (A.size(), vector <int> (B[0].size()));
    int calc;
    for (int row = 0; row < A.size(); row++) {
        for (int col = 0; col < B[row].size(); col++) {
            calc = 0;
            for (int m = 0; m < B.size(); m++) {
                calc += A[row][m] * B[m][col];
            }
            result[row][col] = calc;
        }
    }
    return result;
}
int main(){
    // Zero matrix is just a matrix with any dimensions that has all elements inside the matrix as zero
    vector <vector<int>> A = {
        { 0, 1 },
        { 0, 0 }
    };
    
    if(A.size() == A[0].size()){
        cout << "Matrix: " << endl;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout << "\t" << A[row][col];
            }
            cout << endl;
        }
        
        vector <vector<int>> result = matrixMultiply(A, A);
        // Print Zero Power matrix after calculation
        cout << "\nZero Power matrix: " << endl;
        bool error = false;
        for (int row = 0; row < result.size(); row++) {
            for (int col = 0; col < result[row].size(); col++) {
                cout << "\t" << result[row][col];
                if(result[row][col] != 0) error = true;
            }
            cout << endl;
        }
        if(error) cout << "=> Not a valid zero power matrix.";
    }else{
        cout << "Error! Multiplication not possible" << endl;
    }
}