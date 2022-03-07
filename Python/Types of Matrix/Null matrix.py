# Null matrix is if all the elements are zero in a matrix
A = [[0, 0, 0],
     [0, 0, 0],
     [0, 0, 0]]

print("Null matrix: ")
error = False
for row in range(0, len(A)):
    for col in range(0, len(A[row])):
        print("\t", A[row][col], end='')
        if A[row][col] != 0: error = True
    print()

if error: print("=> This isn't a null matrix.")