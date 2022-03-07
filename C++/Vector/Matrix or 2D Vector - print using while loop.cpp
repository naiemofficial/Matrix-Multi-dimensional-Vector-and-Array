#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>> A = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    cout << "Matrix: A" << endl;
    int row = 0;
    while (row < A.size()) {
        int col = 0;
        while (col < A[0].size()) {
            cout << "\t" << A[row][col];
            col++;
        }
        row++;
        cout << endl;
    }
}