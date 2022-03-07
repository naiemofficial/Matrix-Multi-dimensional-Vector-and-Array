# Row matrix is that has 1 row and multiple columns
A = [[1, 2, 3]]

if len(A) == 1 and len(A[0]) > 1:
    print("Row matrix: ");
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            print("\t", A[row][col], end='')
        print()
else:
    print("=> This isn't a row matrix.")