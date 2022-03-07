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
    [ "i", "2+i" ],
    [ "5", "5" ],
    [ "9+7i", "-3-3i" ]
]

print("Matrix: ")
for row in range(0, len(A)):
    for col in range(0, len(A[row])):
        print("\t", A[row][col], "\t", end='')
        if isNumeric(A[row][col]) != True:
            A[row][col] = conjugate(A[row][col])
    print()


# Check if any element/expression has error
error = False
for row in range(0, len(A)):
    for col in range(0, len(A[row])):
        if A[row][col] == "error":
            error = True
            break

print("\nComplex conjugate: ")
if error:
    print("Error! Invalid expression used.")
else:
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
           print("\t", A[row][col], "\t", end='')
        print()