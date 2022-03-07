#include <iostream>
using namespace std;

int main(){
    // Initialize 2D Array as (2row X 3columns)
    int A[2][3];

    // Set value
    A[0][0] = 10; // ╔═════════╦═════════╦═════════╗
    A[0][1] = 20; // ║  A[0][0]    A[0][1]     A[0][2]  ║
    A[0][2] = 30; // ╠═════════╬═════════╬═════════╣
    A[1][0] = 40; // ║  A[1][0]    A[1][1]     A[1][2]  ║
    A[1][1] = 50; // ╚═════════╩═════════╩═════════╝
    A[1][2] = 60;

    cout << "Matrix: A" << endl;
    cout << "\t" << A[0][0];
    cout << "\t" << A[0][1];
    cout << "\t" << A[0][2] << endl;
    cout << "\t" << A[1][0];
    cout << "\t" << A[1][1];
    cout << "\t" << A[1][2] << endl;
}