#include <iostream>
using namespace std;

int main(){
    int A[3][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    
    cout << "Matrix: A" << endl;
    for (auto &row:A) {
        for (int &col:row) {
            cout << "\t" << col;
        }
        cout << endl;
    }
}