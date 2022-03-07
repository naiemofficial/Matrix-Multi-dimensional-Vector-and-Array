# Transpose matrix is interchanging its rows into columns or columns into rows (A = A' (or A^T))
A = [[1, 2, 3],
     [4, 5, 6]]

B = [[None]*len(A) for row in range(len(A[0]))]

print("Matrix: ")
# Transpose here to B[][] using for loop
for row in range(0, len(A)):
    for col in range(0, len(A[row])):
        B[col][row] = A[row][col];
        print("\t", A[row][col], end='')
    print()

# Print transposed matrix
print("\nTranspose matrix: ")
for row in range(0, len(B)):
    for col in range(0, len(B[row])):
        print("\t", B[row][col], end='')
    print()