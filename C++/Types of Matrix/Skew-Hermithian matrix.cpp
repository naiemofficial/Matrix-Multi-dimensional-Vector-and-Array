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
string conjugate(string expression, bool call){
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
                if(isNumeric(val) && call == true){ // default expression only
                    if(stoi(val) != 0){
                        switch (Operator) {
                            case '+': sn += stoi(val); break;
                            case '-': sn -= stoi(val); break;
                        }
                    }
                } else {  // default expression and nagetive multiplication
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
    vector<vector<string>> A = {
        { "-i", "2+i" },
        { "-2+i", "0" }
    };

    vector <vector<string>> B (A[0].size(), vector <string> (A.size())); // A^H or A^†
    vector <vector<string>> C (A.size(), vector <string> (A[0].size())); // -A

    cout << "Main Matrix (A): " << endl;
    for (int row = 0; row < A.size(); row++) {
        for (int col = 0; col < A[row].size(); col++) {
            cout << "\t" << A[row][col] << "\t";
            B[col][row] = conjugate(A[row][col], true); // true => will return default processed expression 
            C[row][col] = conjugate(A[row][col], false); // false => will return nagetive multiplication expression, or (-A). [Note: Multiplication used on the same method to reduce the codes]
        }
        cout << endl;
    }

    // Check if any element/expression has error
    if(A.size() == A[0].size()){
        bool error = false;  bool hermithian = true;
        for (int row = 0; row < B.size(); row++) {
            for (int col = 0; col < B[row].size(); col++) {
                if(B[row][col] == "error" && error == false) error = true;
                if( A[row][col] != B[row][col] && hermithian == true ){
                    hermithian = false;
                }
            }
        }
    
        if(error){
            cout << "\nError! Invalid expression used." << endl;
        } else {
            bool skew_validation = true;
            cout << "\n╔══════════════════════════════════════════╗" << endl;
            cout << "  A^†: " << endl;
            for (int row = 0; row < B.size(); row++) {
                for (int col = 0; col < B[row].size(); col++) {
                    cout << "\t" + B[row][col] + "\t";
                    if (B[row][col] != C[row][col] && skew_validation == true) {
                        skew_validation = false;
                    }
                }
                cout << endl;
            }
            
            cout << "╠══════════════════════════════════════════╣" << endl;

            cout << "  -A: " << endl;
            for (int row = 0; row < C.size(); row++) {
                for (int col = 0; col < C[row].size(); col++) {
                    cout << "\t" + C[row][col] + "\t";
                }
                cout << endl;
            }
            cout << "╚══════════════════════════════════════════╝" << endl;
            
            if (skew_validation) {
                cout << "↳ (A^† = -A) Therefore, it's a Skew-Hermithian matrix" << endl;
            } else {
                cout << "↳ (A^† ≠ -A) Therefore, it's not a Skew-Hermithian matrix" << endl;
            }
        }

    } else {
        cout << "\nError! The main matrix must be an square to be a Skew-hermethian matrix." << endl;
    }
}