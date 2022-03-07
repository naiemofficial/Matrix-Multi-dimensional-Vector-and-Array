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


def conjugate(expression, call):
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
                if isNumeric(val) and call == True: # default expression only
                    if int(val) != 0:
                        match operator:
                            case '+': sn += int(val)
                            case '-': sn -= int(val)
                else: # default expression and nagetive multiplication
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
    ["-i", "2+i"],
    ["-2+i", "0"]
]

B = [[None]*len(A) for row in range(len(A[0]))]  # A^H or A^†
C = [[None]*len(A[0]) for row in range(len(A))]  # -A

print("Main Matrix (A): ")
for row in range(0, len(A)):
    for col in range(0, len(A[row])):
        print("\t", A[row][col], "\t", end='')
        B[col][row] = conjugate(A[row][col], True); # true => will return default processed expression 
        C[row][col] = conjugate(A[row][col], False); # false => will return nagetive multiplication expression, or (-A). [Note: Multiplication used on the same method to reduce the codes ]
    print()


# Check if any element/expression has error
if len(A) == len(A[0]):
    error = False; hermithian = True
    for row in range(0, len(B)):
        for col in range(0, len(B[row])):
            if B[row][col] == "error" and error == False:
                error = True
            if A[row][col] != B[row][col] and hermithian == True:
                hermithian = False


    if error:
        print("\nError! Invalid expression used.")
    else:
        skew_validation = True
        print("\n╔══════════════════════════════════════════╗");
        print("  A^†: ")
        for row in range(0, len(B)):
            for col in range(0, len(B[row])):
                print("\t", B[row][col], "\t", end='')
                if B[row][col] != C[row][col] and skew_validation == True:
                    skew_validation = False
            print()
        
        print("╠══════════════════════════════════════════╣")

        print("  -A: ");
        for row in range(0, len(C)):
            for col in range(0, len(C[row])):
                print("\t", C[row][col], "\t", end='')
            print()

        print("╚══════════════════════════════════════════╝")
        
        if skew_validation:
            print("↳ (A^† = -A) Therefore, it's a Skew-Hermithian matrix")
        else:
            print("↳ (A^† ≠ -A) Therefore, it's not a Skew-Hermithian matrix")

else:
    print("\nError! The main matrix must be an square to be a Skew-hermethian matrix.")