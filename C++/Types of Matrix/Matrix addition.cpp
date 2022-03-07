#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>> A = {
        { 90, 80, 70 },
        { 60, 50, 40 },
        { 30, 20, 10 }
    };
    vector <vector<int>> B = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    if(A.size() == B.size() && A[0].size() == B[0].size()){
        cout << "Matrix (after addtion): " << endl;
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout << "\t" << (A[row][col] + B[row][col]);
            }
            cout << endl;
        }
    }else{
        cout << "Error! Number of rows and columns must be same." << endl;
    }
}