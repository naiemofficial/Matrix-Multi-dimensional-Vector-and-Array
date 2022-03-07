#include <iostream>
#include <vector>
#include <regex>
using namespace std;

vector <string> split(string content, regex match){
    vector <string> elements;
    regex_token_iterator<string::iterator>
        iterator(content.begin(), content.end(), match, -1);
    regex_token_iterator<string::iterator> end;
    while (iterator != end)
        elements.push_back(*iterator++);
    return elements;
}
bool isNumeric(string value){
    return value.find_first_not_of("0123456789") == string::npos;
}
bool isOperator(char Operator){
    if(Operator == '+' || Operator == '-'){
        return true;
    }else{
        return false;
    }
}
string conjugate(string expression){
    vector<string> chs = split(expression, regex("(?=[-+*/])"));
    int sn = 0; // sum of numerics
    expression = "";
    for (int i = 0; i < chs.size(); i++) {
        string val = chs[i];
        if(val.length() > 0){
            char Operator = 0;
            if(isOperator(val.at(0))){
                Operator = val.at(0);
                val = val.substr(1);
            } else if (i == 0) {
                Operator = '+';
            }

            if(regex_replace(val, regex("^(\\d*?[a-zA-Z$])"), "").length() > 0 && !isNumeric(val)){
                return "error";
            }else{
                if(isNumeric(val)){
                    if(stoi(val) != 0){
                        switch (Operator) {
                            case '+': sn += stoi(val); break;
                            case '-': sn -= stoi(val); break;
                        }
                    }
                }else{
                    switch (Operator) {
                        case '+': expression += '-' + val; break;
                        case '-': expression += '+' + val; break;
                    }
                }
            }
        }
    }
    if(sn == 0 && expression.length() == 0){
        expression = to_string(sn);
    }else if(sn != 0){
        expression = to_string(sn).append(expression);
    }
    if (isOperator(expression.at(0)) && (expression.at(0) == '+' || expression == "-0")) {
        expression = expression.substr(1);
    }
    return regex_replace(expression, regex("^\\s+|\\s+$"), "");
}

int main(){
    vector <vector <string>> A = {
        { "2", "3-i" },
        { "3+i", "3" }
    };

    vector <vector<string>> B (A[0].size(), vector <string> (A.size()));

    cout << "Matrix: " << endl;
    for (int row = 0; row < A.size(); row++) {
        for (int col = 0; col < A[row].size(); col++) {
            cout << "\t" << A[row][col] << "\t";
            B[col][row] = conjugate(A[row][col]);
        }
        cout << endl;
    }

    // Check if any element/expression has error
    bool error = false; bool hermithian = true;
    for (int row = 0; row < B.size(); row++) {
        for (int col = 0; col < B[row].size(); col++) {
            if(B[row][col] == "error" && error == false) error = true;
            if( (A.size() != A[row].size() || A[row][col] != B[row][col]) && hermithian == true ){
                hermithian = false;
            }
        }
    }

    if(error){
        cout << "\nError! Invalid expression used." << endl;
    } else {
        cout << "\nConjugate transpose (Hermithian): " << endl;
        for (int row = 0; row < B.size(); row++) {
            for (int col = 0; col < B[row].size(); col++) {
                cout << "\t" << B[row][col] << "\t";
            }
            cout << endl;
        }

        // Hermitian matrix is, when the conjugate transpose of a complex square matrix is equal to itself
        if(hermithian){
            cout << "\n^ The matrix is Hermithian" << endl;
        }else{
            cout << "\n^ The matrix isn't Hermithian" << endl;
        }
    }
}