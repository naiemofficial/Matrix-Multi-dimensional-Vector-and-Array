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
bool validIdentityMatrix(vector <vector<int>> matrix){
    bool flag = true; int sameCount = 0;
    if(matrix.size() == matrix[0].size()){
        for (int row = 0; row < matrix.size(); row++) {
            for (int col = 0; col < matrix[row].size(); col++) {
                if((row == col && row != 0 && col != 0) && (matrix[(row-1)][(col-1)] == matrix[row][col])){
                    sameCount++;
                }else if(row != col && matrix[row][col] != 0){
                    flag = false;
                }
            }
        }
        if(flag == true && (sameCount+1) == matrix.size()){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}
bool validInvolutoryMatrix(vector <vector<int>> matrix, vector <vector<int>> result){
    if(validIdentityMatrix(result)){
        matrix = matrixMultiply(matrix, matrix);
        if(matrix.size() == result.size() && matrix[0].size() == result[0].size()){
            for (int row = 0; row < matrix.size(); row++) {
                for (int col = 0; col < matrix[row].size(); col++) {
                    if(matrix[row][col] != result[row][col])
                        return false;
                }
            }
        }
    }else{
        return false;
    }
    return true;
}

int main(){
    // Involutory matrix if matrix multiply by itself return the identity matrix. (A^2 = I)
    vector <vector<int>> matrix = {
        { 2, 3 },
        {-1,-2 }
    };
    vector <vector<int>> result = {
        { 1, 0 },
        { 0, 1 }
    };

    if(validInvolutoryMatrix(matrix, result) == true){
        cout << "Valid Involutory matrix" << endl;
    }else{
        cout << "Invalid Involutory matrix" << endl;
    }
}