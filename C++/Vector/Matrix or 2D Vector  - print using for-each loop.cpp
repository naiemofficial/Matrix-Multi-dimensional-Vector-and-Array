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
    for (vector <int> row:A) {
        for (int value:row) {
            cout << "\t" << value;
        }
        cout << endl;
    }
}