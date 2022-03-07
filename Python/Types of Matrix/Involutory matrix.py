def matrixMultiply(A, B):
    result = [[None]*len(B[0]) for row in range(len(A))]
    for row in range(0, len(A)):
        for col in range(0, len(B[row])):
            calc = 0
            for m in range(0, len(B)):
                calc += A[row][m] * B[m][col]
            result[row][col] = calc
    return result


# Involutory matrix if matrix multiply by itself return the identity matrix. (A^2 = I)
A = [[ 2,  3],
     [-1, -2]]

if len(A) == len(A[0]):
    print("Matrix: ");
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            print("\t", A[row][col], end='')
        print()
    
    result = matrixMultiply(A, A)
    # Print idempotent matrix after calculation
    print("\nInvolutory matrix: ");
    for row in range(0, len(result)):
        for col in range(0, len(result[row])):
            print("\t", result[row][col], end='')
        print()
else:
    print("Error! Multiplication not possible")