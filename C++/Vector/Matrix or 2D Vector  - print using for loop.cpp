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
    for (int row = 0; row < A.size(); row++) {
        for (int col = 0; col < A[row].size(); col++) {
            cout << "\t" << A[row][col];
        }
        cout << endl;
    }
}