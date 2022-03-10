// Use IDE to get inline input. Integrated terminal or code editors may not work to get inline input (e.g. VSCode)
#include <iostream>
using namespace std;
int main(){
    int row_in, col_in;
    cout << "Enter the number of rows: ";
    cin >> row_in;
    cout << "Enter the number of columns: ";
    cin >> col_in;

    if((row_in > 1 && col_in >= 1) || (row_in >= 1 && col_in > 1)){
        int **A = new int *[row_in];
        for (int row = 0; row < row_in; row++) {
            A[row] = new int[col_in];
            for (int col = 0; col < col_in; col++) {
                cout << "\t";
                cin >> A[row][col];
            }
            cout << endl;
        }
        cout << A[0][1] << endl;
        cout << "Matrix: A" << endl;
        for (int row = 0; row < row_in; row++) {
            for (int col = 0; col < col_in; col++) {
                cout << "\t" << A[row][col];
            }
            cout << endl;
            delete[] A[row];
        }
        delete[] A;
    } else {
        cout << "Error! A Matrix must have either 1 row and multple columns or multiple rows and multiple column.";
    }
}
