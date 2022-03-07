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
    vector <vector<string>> A = {
        { "i", "2+i" },
        { "5", "5" },
        { "9+7i", "-3-3i" }
    };

    cout << "Matrix: " << endl;
    for (int row = 0; row < A.size(); row++) {
        for (int col = 0; col < A[row].size(); col++) {
            cout << "\t" << A[row][col] << "\t";
            if (isNumeric(A[row][col]) != true){
                A[row][col] = conjugate(A[row][col]);
            }
        }
        cout << endl;
    }

    // Check if any element/expression has error
    bool error = false;
    for (int row = 0; row < A.size(); row++) {
        for (int col = 0; col < A[row].size(); col++) {
            if(A[row][col] == "error"){
                error = true;
                break;
            }
        }
    }
    cout <<"\nComplex conjugate: " << endl;
    if(error){
        cout <<"Error! Invalid expression used." << endl;
    } else {
        for (int row = 0; row < A.size(); row++) {
            for (int col = 0; col < A[row].size(); col++) {
                cout <<"\t" << A[row][col] << "\t";
            }
            cout << endl;
        }
    }
}