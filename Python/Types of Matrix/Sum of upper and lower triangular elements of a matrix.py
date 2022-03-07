# (3row X 3columns)
A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

print("Matrix: ")
Ut=0; Lt=0 
for row in range(0, len(A)):
    for col in range(0, len(A[row])):
        if(row <= col):
            Ut += A[row][col]      # Upper Triangular
        if(row >= col):
            Lt += A[row][col]      # Lower Triangular
        print("\t", A[row][col], end='');  
    print()

print("\nSum of Upper Triangular =", Ut)
print("Sum of Lower Triangular =", Lt)