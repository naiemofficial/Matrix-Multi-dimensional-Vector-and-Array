row_in = int(input("Enter the number of rows: "))
col_in = int(input("Enter the number of columns: "))
A = [[None]*col_in for row in range(row_in)]

if (row_in > 1 and col_in >= 1) or (row_in >= 1 and col_in > 1):
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            A[row][col] = int(input())
        print()

    print("Matrix: A")
    for row in range(0, len(A)):
        for col in range(0, len(A[row])):
            print("\t", A[row][col], end='')
        print()
else:
    print("Error! A Matrix must have either 1 row and multple columns or multiple rows and multiple column.")