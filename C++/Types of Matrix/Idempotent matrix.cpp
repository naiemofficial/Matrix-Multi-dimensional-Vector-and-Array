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
    // Idempotent matrix is a square matrix which when multiplied by itself, gives back the same matrix (A^2 = A)
    vector <vector<int>> A = {
        { 2,  1 },
        {-2, -1 }
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
        // Print idempotent matrix after calculation
        cout <<"\nIdempotent matrix: " << endl;
        for (int row = 0; row < result.size(); row++) {
            for (int col = 0; col < result[row].size(); col++) {
                cout << "\t" << result[row][col];
            }
            cout << endl;
        }
    }else{
        cout << "Error! Multiplication not possible" << endl;
    }
}