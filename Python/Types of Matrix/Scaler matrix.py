# Scaler matrix is if the diagonal elements are same number and other elements are zero.
A = [[5, 0, 0],
     [0, 5, 0],
     [0, 0, 5]]

if len(A) == len(A[0]):
    print("Scaler matrix: ")
    error = False; sameCount = 0
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            print("\t", A[row][col], end='')
            if row != col and A[row][col] != 0: error = True
            if (row == col and row != 0 and col != 0) and (A[row-1][col-1] == A[row][col]):
                sameCount = sameCount + 1
        print()

    if(error or sameCount+1 != len(A)): print("=> This isn't a scaler matrix.")
else:
    print("Error! This isn't an Scaler matrix. Number of rows and columns must be same")