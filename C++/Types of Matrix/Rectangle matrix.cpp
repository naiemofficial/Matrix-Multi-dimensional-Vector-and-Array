#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Rectangle matrix is that rows and columns number isn't same
    vector <vector<int>> A = {
        { 1, 2, 3 },
        { 4, 5, 6 }
    };

    if (A.size() != A[0].size()) {
        cout << "Rectangle matrix: " << endl;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout << "\t" << A[row][col];
            }
            cout << endl;
        }
    } else {
        cout << "Error! This isn't a rectangle matrix. Number of rows and columns can't be same" << endl;
    }
}