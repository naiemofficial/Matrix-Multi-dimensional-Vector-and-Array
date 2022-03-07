def matrixMultiply(A, B):
    result = [[None]*len(B[0]) for row in range(len(A))]
    for row in range(0, len(A)):
        for col in range(0, len(B[row])):
            calc = 0
            for m in range(0, len(B)):
                calc += A[row][m] * B[m][col]
            result[row][col] = calc
    return result


A = [[1, -1],
     [0,  2]]

B = [[1, 3, 0],
     [2, 0, 1]]

if len(A[0]) == len(B):
    sum = matrixMultiply(A, B)

    # Print multiplied matrix
    print("Multiplied matrix: ")
    for row in range(0, len(sum)):
        for col in range(0, len(sum[row])):
            print("\t", sum[row][col], end='')
        print()
else:
    print("Error! Multiplication not possible")