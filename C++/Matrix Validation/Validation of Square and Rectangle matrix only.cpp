#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>> A = {
        { 1, 2, 3 },
        { 4, 5, 6 }
    };
    
    if (A.size() == A[0].size()) {
        cout << "It's a Square matrix" << endl;
    } else {
        cout << "It's a Rectangle matrix" << endl;
    }
}