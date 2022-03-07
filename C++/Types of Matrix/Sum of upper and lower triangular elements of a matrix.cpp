#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>> A = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    cout << "Matrix: " << endl;
    int Ut=0, Lt=0; 
    for (int row = 0; row < A.size(); row++) {
        for (int col = 0; col < A[row].size(); col++) {
            if(row <= col)
                Ut += A[row][col];      // Upper Triangular
            if(row >= col)
                Lt += A[row][col];      // Lower Triangular
            cout << "\t" << A[row][col];
        }
        cout << endl;
    }
    cout << "\nSum of Upper Triangular = " << Ut << endl;
    cout << "Sum of Lower Triangular = " << Lt << endl;
}