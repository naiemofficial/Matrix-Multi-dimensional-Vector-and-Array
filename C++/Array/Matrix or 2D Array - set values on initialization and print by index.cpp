#include <iostream>
using namespace std;

int main(){
    // (2row X 3columns)      // ╔═════════╦═════════╦═════════╗
    int A[2][3] = {           // ║  A[0][0]    A[0][1]     A[0][2]  ║
        { 10,    20,   30 },  // ╠═════════╬═════════╬═════════╣
        { 40,    50,   60 }   // ║  A[1][0]    A[1][1]     A[1][2]  ║
    };                        // ╚═════════╩═════════╩═════════╝

    cout << "Matrix: A" << endl;
    cout << "\t" << A[0][0];
    cout << "\t" << A[0][1];
    cout << "\t" << A[0][2] << endl;
    cout << "\t" << A[1][0];
    cout << "\t" << A[1][1];
    cout << "\t" << A[1][2] << endl;
}