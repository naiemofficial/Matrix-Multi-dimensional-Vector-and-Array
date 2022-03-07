A = [[90, 80, 70],
     [60, 50, 40],
     [30, 20, 10]]
B = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

if len(A) == len(B) and len(A[0]) == len(B[0]):
    print("Matrix (after addtion): ")
    for row in range(len(A)):
        for col in range(len(A[row])):
            print("\t", (A[row][col] + B[row][col]), end='')
        print()
else:
    print("Error! Number of rows and columns must be same.")