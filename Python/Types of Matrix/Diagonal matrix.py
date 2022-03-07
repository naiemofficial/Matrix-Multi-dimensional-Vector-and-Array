# Diagonal matrix is if the elements of matrix except main diagonal are zero.
A = [[1, 0, 0],
     [0, 5, 0],
     [0, 0, 9]]

if len(A) == len(A[0]):
    print("Diagonal matrix: ")
    error = False
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            print("\t", A[row][col], end='')
            if row != col and A[row][col] != 0: error = True
        print()
    
    if error: print("=> Invalid Diagonal Matrix.")
else:
    print("Error! Number of rows and columns must be same.")