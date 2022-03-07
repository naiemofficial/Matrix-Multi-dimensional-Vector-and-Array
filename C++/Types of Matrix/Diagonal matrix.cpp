#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Diagonal matrix is if the elements of matrix except main diagonal are zero.
    vector <vector<int>> A = {
        { 1, 0, 0 },
        { 0, 5, 0 },
        { 0, 0, 9 }
    };

    if (A.size() == A[0].size()) {
        cout << "Diagonal matrix: " << endl;
        bool error = false;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout << "\t" << A[row][col];
                if(row != col && A[row][col] != 0) error = true;
            }
            cout << endl;
        }

        if(error) cout << "=> Invalid Diagonal Matrix." << endl;
    } else {
        cout << "Error! Number of rows and columns must be same." << endl;
    }
}