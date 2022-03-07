def matrixMultiply(A, B):
    result = [[None]*len(B[0]) for row in range(len(A))]
    for row in range(0, len(A)):
        for col in range(0, len(B[row])):
            calc = 0
            for m in range(0, len(B)):
                calc += A[row][m] * B[m][col]
            result[row][col] = calc
    return result


def validIdentityMatrix(matrix):
    flag = True; sameCount = 0
    if len(matrix) == len(matrix[0]):
        for row in range(0, len(matrix)):
            for col in range(0, len(matrix[row])):
                if (row == col and row != 0 and col != 0) and (matrix[(row-1)][(col-1)] == matrix[row][col]):
                    sameCount += 1
                elif row != col and matrix[row][col] != 0:
                    flag = False

        if flag == True and (sameCount+1) == len(matrix):
            return True
        else:
            return False
    else:
        return False

        
def validInvolutoryMatrix(matrix, result):
    if validIdentityMatrix(result):
        matrix = matrixMultiply(matrix, matrix);
        if len(matrix) == len(result) and len(matrix[0]) == len(result[0]):
            for row in range(0, len(matrix)):
                for col in range(0, len(matrix[row])):
                    if matrix[row][col] != result[row][col]:
                        return False
    else:
        return False
    return True

# Involutory matrix if matrix multiply by itself return the identity matrix. (A^2 = I)
matrix = [[ 2,  3],
          [-1, -2]]
result = [[1, 0],
          [0, 1]]

if validInvolutoryMatrix(matrix, result) == True:
    print("Valid Involutory matrix")
else:
    print("Invalid Involutory matrix")