#include <iostream>
using namespace std;

int main(){
    int A[3][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    
    cout << "Matrix: A" << endl;
    for (int row = 0; row < sizeof(A)/sizeof(A[0]); row++) {
        for (int col = 0; col < sizeof(A[row])/sizeof(A[row][0]); col++) {
            cout << "\t" << A[row][col];
        }
        cout << endl;
    }
}