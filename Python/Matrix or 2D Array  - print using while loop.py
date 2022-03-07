A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

print("Matrix: A")
row = 0
while (row < len(A)):
    col = 0
    while (col < len(A[row])):
        print("\t", A[row][col], end='')
        col += 1
    row += 1
    print()