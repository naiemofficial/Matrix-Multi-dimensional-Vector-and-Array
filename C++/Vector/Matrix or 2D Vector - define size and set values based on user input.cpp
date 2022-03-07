// Use IDE to get inline input. Integrated terminal or code editors may not work to get inline input (e.g. VSCode)
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int row_in, col_in;
    cout << "Enter the number of rows: ";
    cin >> row_in;
    cout << "Enter the number of columns: ";
    cin >> col_in;

    vector <vector<int>> A(row_in, vector <int>(col_in));
    for (int row = 0; row < A.size(); row++) {
        for (int col = 0; col < A[row].size(); col++) {
            cout << "\t";
            cin >> A[row][col];
        }
        cout << endl;
    }

    cout << "Matrix: A" << endl;
    for (vector <int> row:A) {
        for (int value:row) {
            cout << "\t" << value;
        }
        cout << endl;
    }
}