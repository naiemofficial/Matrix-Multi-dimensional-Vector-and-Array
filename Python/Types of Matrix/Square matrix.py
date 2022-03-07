# Square matrix is that rows and columns number is same
A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

if len(A) == len(A[0]):
    print("Square matrix: ")
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            print("\t", A[row][col], end='')
        print()
else:
    print("Error! This isn't an square matrix. Number of rows and columns must be same")