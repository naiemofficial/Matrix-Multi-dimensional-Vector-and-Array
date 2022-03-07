# (3row X 3columns) # ╔═══╦═══╦═══╗
A = [[1, 2, 3],     # ║ 1    2    3 ║
     [0, 5, 6],     # ╠═══╬═══╬═══╣
     [0, 0, 9]]     # ║      5    6 ║
#                   # ╠═══╬═══╬═══╣
#                   # ║           9 ║
#                   # ╚═══╩═══╩═══╝
if len(A) == len(A[0]):
    print("Upper Triangular matrix: ")
    sum = 0; error = False
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            if row <= col:
                sum += A[row][col]
            elif A[row][col] != 0:
                error = True
            print("\t", A[row][col], end='')
        print()
    print("Sum of upper triangular matrix is =", sum)
    if error: print("=> Invalid Upper Triangular matrix.")
else:
    print("Error! Number of rows and columns must be same.")