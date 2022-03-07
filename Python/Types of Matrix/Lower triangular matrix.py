# (3row X 3columns) # ╔═══╦═══╦═══╗
A = [[1, 2, 0],     # ║ 1           ║
     [4, 5, 0],     # ╠═══╬═══╬═══╣
     [7, 8, 9]]     # ║ 4    5      ║
                    # ╠═══╬═══╬═══╣
                    # ║ 7    8    9 ║
                    # ╚═══╩═══╩═══╝
if len(A) == len(A[0]):
    print("Lower Triangular matrix: ")
    sum = 0; error = False
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            if row >= col:
                sum += A[row][col]
            elif A[row][col] != 0:
                error = True
            print("\t", A[row][col], end='')
        print()
    print("Sum of lower triangular matrix is =", sum)
    if error: print("=> Invalid Lower Triangular matrix.")
else:
    print("Error! Number of rows and columns must be same.")