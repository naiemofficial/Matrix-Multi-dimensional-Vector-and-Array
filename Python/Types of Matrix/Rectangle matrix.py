# Rectangle matrix is that rows and columns number isn't same ()
A = [[1, 2, 3],
     [4, 5, 6]]

if len(A) != len(A[0]):
    print("Rectangle matrix: ");
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            print("\t", A[row][col], end='')
        print()
else:
    print("Error! This isn't a rectangle matrix. Number of rows and columns can't be same")
