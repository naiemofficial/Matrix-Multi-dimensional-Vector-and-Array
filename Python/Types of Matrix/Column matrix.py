# Column matrix is that has 1 column and multiple rows
A = [[1],
     [2],
     [3]]

if len(A) > 1 and len(A[0]) == 1:
    print("Column matrix: ")
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            print("\t", A[row][col], end='')
        print()
else:
    print("=> This isn't a column matrix.")
