# Python ≥3.10 is required to run this program
import re
def isNumeric(value):
    try:
        int(value)
        return True
    except:
        return False


def isOperator(operator):
    if operator == '+' or operator == '-':
        return True
    else:
        return False


def conjugate(expression):
    chs = re.split(r'(?=[-+*/])', expression.strip())
    sn = 0  # sum of numerics
    expression = ""
    for i in range(0, len(chs)):
        val = chs[i]
        if len(val) > 0:
            operator = None
            if isOperator(val[0]):
                operator = val[0]
                val = val[1:]
            elif (i == 0):
                operator = '+'

            if len(re.sub(r'^(\d*?[a-zA-Z$])', "", val)) > 0 and isNumeric(val) == False:
                return "error"
            else:
                if isNumeric(val):
                    if int(val) != 0:
                        match operator:
                            case '+': sn += int(val)
                            case '-': sn -= int(val)
                else:
                    match operator:
                        case '+': expression += '-' + val
                        case '-': expression += '+' + val

    if sn == 0 and len(expression) == 0:
        expression = str(sn)
    elif sn != 0:
        expression = str(sn) + expression

    if isOperator(expression[0]) and (expression[0] == '+' or expression == "-0"):
        expression = expression[1:]

    return expression.strip()


A = [
    ["2", "3-i"],
    ["3+i", "3"]
]

B = [[None]*len(A) for row in range(len(A[0]))]

print("Matrix: ")
for row in range(0, len(A)):
    for col in range(0, len(A[row])):
        print("\t", A[row][col], "\t", end='')
        B[col][row] = conjugate(A[row][col])
    print()


# Check if any element/expression has error
error = False; hermithian = True;
for row in range(0, len(B)):
    for col in range(0, len(B[row])):
        if B[row][col] == "error" and error == False:
            error = True
        if (len(A) != len(A[row]) or A[row][col] != B[row][col]) and hermithian == True:
            hermithian = False


if error:
    print("\nError! Invalid expression used.")
else:
    print("\nConjugate transpose (Hermithian): ")
    for row in range(0, len(B)):
        for col in range(0, len(B[row])):
            print("\t", B[row][col], "\t", end='')
        print()


    # Hermitian matrix is, when the conjugate transpose of a complex square matrix is equal to itself
    if hermithian:
        print("\n^ The matrix is Hermithian")
    else:
        print("\n^ The matrix isn't Hermithian")