#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Row matrix is that has 1 row and multiple columns
    vector <vector<int>> A = {
        { 1, 2, 3 }
    };

    if (A.size() == 1 && A[0].size() > 1) {
        cout << "Row matrix: " << endl;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout << "\t" << A[row][col];
            }
            cout << endl;
        }
    } else {
        cout << "=> This isn't a row matrix.";
    }
}