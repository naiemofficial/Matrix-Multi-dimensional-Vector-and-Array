# (2row X 3columns)
A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

print("Matrix: A")
for row in A:
    for col in row:
        print("\t", col, end='')
    print()