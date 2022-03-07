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
    vector <vector<int>> A = {
        { 1, -1 },
        { 0,  2 }
    };
    vector <vector<int>> B = {
        { 1, 3, 0 },
        { 2, 0, 1 }
    };

    if(A[0].size() == B.size()){
        vector <vector<int>> sum = matrixMultiply(A, B);

        // Print multiplied matrix
        cout << "Multiplied matrix: " << endl;
        for (int row = 0; row < sum.size(); row++) {
            for (int col = 0; col < sum[row].size(); col++) {
                cout << "\t" << sum[row][col];
            }
            cout << endl;
        }
    }else{
        cout << "Error! Multiplication not possible" << endl;
    }
}