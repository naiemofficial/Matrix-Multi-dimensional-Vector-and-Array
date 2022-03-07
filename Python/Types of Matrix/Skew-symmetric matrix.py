# Skew-symmetric, if transpose of matrix A is equal to negative of matrix and diagonal elements are zero (A' = -A)
A = [[ 0,  1,  2],
     [-1,  0,  3],
     [-2, -3,  0]]

if len(A) == len(A[0]):
    print("Matrix: ")
    # Transpose here to B[][] using for loop
    for row in range(len(A)):
        for col in range(len(A[row])):
            print("\t", A[row][col], end='')
            if A[row][col] > 0:
                A[row][col] = A[row][col]-(A[row][col] * 2)
            else:
                A[row][col] = A[row][col]+((A[row][col] * -1) * 2)
        print()

    # Print skew-symmetric matrix
    print("\nSkew-symmetric Matrix: ")
    for row in range(len(A)):
        for col in range(len(A[row])):
           print("\t", A[row][col], end='')
        print()
else:
    print("Error! Number of rows and columns must be same")
