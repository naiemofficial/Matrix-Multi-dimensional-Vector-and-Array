#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Skew-symmetric, if transpose of matrix A is equal to negative of matrix (A' = -A)
    vector <vector<int>> A = {
        { 0,  1,  2 },
        {-1,  0,  3 },
        {-2, -3,  0 }
    };

    if (A.size() == A[0].size()) {
        cout << "Matrix: " << endl;
        // Transpose here to B[][] using for loop
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout << "\t" << A[row][col];
                if(A[row][col] > 0){
                    A[row][col] = A[row][col]-(A[row][col] * 2); 
                }else{
                    A[row][col] = A[row][col]+((A[row][col] * -1) * 2); 
                }
            }
            cout << endl;
        }

        // Print skew-symmetric matrix
        cout << "\nSkew-symmetric Matrix: " << endl;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout << "\t" << A[row][col];
            }
            cout << endl;
        }
    } else {
        cout << "Error! Number of rows and columns must be same" << endl;
    }
}