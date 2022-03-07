# (3row X 3columns)
A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

print("Matrix: ")
sum = 0
for row in range(0, len(A)):
    for col in range(0, len(A[row])):
        sum += A[row][col]
        print("\t", A[row][col], end='');  
    print()

print("\nSum of all the elements of matrix = ", sum)