#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Null matrix is if all the elements are zero in a matrix
    vector <vector<int>> A = {
        { 0, 0, 0 },
        { 0, 0, 0 },
        { 0, 0, 0 }
    };

    cout << "Null matrix: " << endl;
    bool error = false;
    for (int row = 0; row < A.size(); row++) {
        for (int col = 0; col < A[row].size(); col++) {
            cout << "\t" << A[row][col];
            if(A[row][col] != 0) error = true;
        }
        cout << endl;
    }
    if (error) cout << "=> This isn't a null matrix." << endl;
}