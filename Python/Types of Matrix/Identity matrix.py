# Identity matrix is if the diagonal elements are 1 and other elements are zero.
A = [[1, 0, 0],
     [0, 1, 0],
     [0, 0, 1]]

if len(A) == len(A[0]):
    print("Identity matrix: ")
    error = False
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            print("\t", A[row][col], end='')
            if (row != col and A[row][col] != 0) or (row == col and A[row][col] != 1): error = True
        print()

    if error: print("=> Invalid Identity Matrix.")
else:
    print("Error! This isn't an Identity matrix. Number of rows and columns must be same")