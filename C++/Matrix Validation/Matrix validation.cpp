#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>> A = {
        { 1, 0, 0 },
        { 0, 1, 0 },
        { 0, 0, 1 }
    };
    
    bool flag = true; int sameCount = 0, zeroCount = 0;  
    cout << "Matrix: " << endl;
    for (int row = 0; row < A.size(); row++) {
        for (int col = 0; col < A[row].size(); col++) {
            cout << "\t" << A[row][col];
            if((row == col && row != 0 && col != 0) && (A[row-1][col-1] == A[row][col])){
                sameCount++;
            }else if(row != col && A[row][col] != 0){
                flag = false;
            }
            if (A[row][col] == 0) {
                zeroCount++;
            }
        }
        cout << endl;
    }
    
    cout << endl;
    if (zeroCount == (A.size() * A[0].size())) {
        cout << "It's a Null matrix" << endl;
    }else if(A.size() == A[0].size()){
        if(flag == true){
            if((sameCount+1) == A.size()){
                if(A[0][0] == 1){
                    cout << "It's a Identitiy matrix" << endl;
                }else{
                    cout << "It's a Scaler matrix" << endl;
                }
            }else{
                cout << "It's a Diagonal matrix" << endl;
            }
        }else{
            cout << "It's not a Diagonal neither Identity, Scaler or Null matrix. \nBut it's a Square matrix." << endl;
        }
    }else if(A.size() == 1 && A[0].size() > 1){
        cout << "It's a Row matrix." << endl;
    }else if(A.size() > 1 && A[0].size() == 1){
        cout << "It's a Column matrix." << endl;
    }else{
        cout << "It's a Rectangle matrix." << endl;
    }
}