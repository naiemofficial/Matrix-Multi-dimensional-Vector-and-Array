def matrixMultiply(A, B):
    result = [[None]*len(B[0]) for row in range(len(A))]
    for row in range(0, len(A)):
        for col in range(0, len(B[row])):
            calc = 0
            for m in range(0, len(B)):
                calc += A[row][m] * B[m][col]
            result[row][col] = calc
    return result


# Zero matrix is just a matrix with any dimensions that has all elements inside the matrix as zero
A = [[0, 1],
     [0, 0]]

if len(A) == len(A[0]):
    print("Matrix: ")
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            print("\t", A[row][col], end='')
        print()
    
    result = matrixMultiply(A, A)

    # Print Zero Power matrix after calculation
    print("\nZero Power matrix: ")
    error = False
    for row in range(0, len(result)):
        for col in range(0, len(result[row])):
            print("\t", result[row][col], end='')
            if result[row][col] != 0: error = True
        print()
    if error: print("=> Not a valid zero power matrix.")
else:
    print("Error! Multiplication not possible")