# Symmetric matrix is, if the transpose of that matrix is equal to itself (A' = A)
A = [[1, 2, 3],
     [2, 4, 5],
     [3, 5, 6]]

B = [[None]*len(A[0]) for row in range(len(A))]
if len(A) == len(A[0]):
    print("Matrix: ")
    # Transpose here to B[][] using for loop
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            B[col][row] = A[row][col]
            print("\t", A[row][col], end='')
        print()

    # Print transposed matrix
    print("\nSymmetric matrix: ")
    for row in range(0, len(B)):
        for col in range(0, len(B[row])):
            print("\t", B[row][col], end='')
        print()
else:
    print("Error! Number of rows and columns must be same")