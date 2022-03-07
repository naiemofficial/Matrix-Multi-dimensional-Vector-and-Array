#include <iostream>
#include <vector>
using namespace std;

int main(){
    // (3row X 3columns)
    vector <vector<int>> A = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    
    cout << "Matrix: " << endl;
    int sum = 0;
    for (int row = 0; row < A.size(); row++) {
        for (int col = 0; col < A[row].size(); col++) {
            sum += A[row][col];
            cout << "\t" << A[row][col];
        }
        cout << endl;
    }
    cout << "\nSum of all the elements of matrix = " << sum << endl;
}