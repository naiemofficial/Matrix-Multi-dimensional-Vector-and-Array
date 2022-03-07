def matrixMultiply(A, B):
    result = [[None]*len(B[0]) for row in range(len(A))]
    for row in range(0, len(A)):
        for col in range(0, len(B[row])):
            calc = 0
            for m in range(0, len(B)):
                calc += A[row][m] * B[m][col]
            result[row][col] = calc
    return result


def validIdempotentMatrix(matrix, result):
    if len(matrix) == len(result) and len(matrix[0]) == len(result[0]):
        for row in range(0, len(matrix)):
            for col in range(0, len(matrix[row])):
                if(matrix[row][col] != result[row][col]):
                    return False
    else:
        return False
    return True


# Idempotent matrix is a square matrix which when multiplied by itself, gives back the same matrix (A^2 = A)
matrix = [[ 1,  2],
          [-1, -2]]
result = [[1,  2],
          [-1, -2]]

if validIdempotentMatrix(matrix, result) == True:
    print("Valid Idempotent matrix")
else:
    print("Invalid Idempotent matrix")