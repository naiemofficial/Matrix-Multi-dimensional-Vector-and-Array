rows = int(input("How many rows: "))
A = [None] * rows

print("Use space or tab to separate a column")
for row in range(0, len(A)):
    A[row] = [int(col) for col in input().split()]


print("\nMatrix: A")
for row in range(0, len(A)):
    for col in range(0, len(A[row])):
        print("\t", A[row][col], end='')
    print()