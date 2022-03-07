A = [[1, 0, 0],
     [0, 5, 0],
     [0, 0, 9]]

if len(A) == len(A[0]):
    print("Diagonal matrix: ")
    main_diagonal = 0; secondary_diagonal = 0
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            print("\t", A[row][col], end='')
            if row == col:
                main_diagonal += A[row][col]
            if (row+col) == (len(A)-1):
                secondary_diagonal += A[row][col]
        print()
    print("\nSum of diagonals = ", (main_diagonal + secondary_diagonal))
    print("Sum of main diagonal = ", main_diagonal)
    # Secondary diagonal is the flip of a main/primary diagonal (or upper-right to -> lower-left diagonal)
    print("Sum of secondary diagonal = ", secondary_diagonal)
else:
    print("Error! Number of rows and columns must be same.")