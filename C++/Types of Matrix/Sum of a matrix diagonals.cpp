#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>> A = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    if (A.size() == A[0].size()) {
        cout << "Diagonal matrix: " << endl;
        int main_diagonal = 0, secondary_diagonal = 0;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout << "\t" << A[row][col];
                if(row == col)
                    main_diagonal += A[row][col];
                if((row+col) == (A.size()-1))
                    secondary_diagonal += A[row][col];
            }
            cout << endl;
        }
        cout << "\nSum of diagonals = " << (main_diagonal + secondary_diagonal) << endl;
        cout << "Sum of main diagonal = " << main_diagonal << endl;
        // Secondary diagonal is the flip of a main/primary diagonal (or upper-right to -> lower-left diagonal)
        cout << "Sum of secondary diagonal = " << secondary_diagonal << endl;
    } else {
        cout << "Error! Number of rows and columns must be same." << endl;
    }
}