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
bool validIdempotentMatrix(vector <vector<int>> matrix, vector <vector<int>> result){
    if(matrix.size() == result.size() && matrix[0].size() == result[0].size()){
        for (int row = 0; row < matrix.size(); row++) {
            for (int col = 0; col < matrix[row].size(); col++) {
                if(matrix[row][col] != result[row][col])
                    return false;
            }
        }
    }else{
        return false;
    }
    return true;
}

int main(){
    // Idempotent matrix is a square matrix which when multiplied by itself, gives back the same matrix (A^2 = A)
    vector <vector<int>> matrix = {
        { 1, 2 },
        {-1,-2 }
    };
    vector <vector<int>> result = {
        { 1, 2 },
        {-1,-2 }
    };

    if(validIdempotentMatrix(matrix, result) == true){
        cout << "Valid Idempotent matrix" << endl;
    }else{
        cout << "Invalid Idempotent matrix" << endl;
    }
}