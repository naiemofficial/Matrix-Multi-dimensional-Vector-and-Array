A = [[None]*3 for row in range(2)]  # Initialize 2D Array as (2row X 3columns)

#Set value
A[0][0] = 10   # ╔═════════╦═════════╦═════════╗
A[0][1] = 20   # ║  A[0][0]    A[0][1]     A[0][2]  ║
A[0][2] = 30   # ╠═════════╬═════════╬═════════╣
A[1][0] = 40   # ║  A[1][0]    A[1][1]     A[1][2]  ║
A[1][1] = 50   # ╚═════════╩═════════╩═════════╝
A[1][2] = 60

print("Matrix: A")
print("\t", A[0][0], end='')
print("\t", A[0][1], end='')
print("\t", A[0][2])
print("\t", A[1][0], end='')
print("\t", A[1][1], end='')
print("\t", A[1][2])