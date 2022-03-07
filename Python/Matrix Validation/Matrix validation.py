A = [[1, 0, 0],
     [0, 1, 0],
     [0, 0, 1]]

flag = True; sameCount = 0; zeroCount = 0  
print("Matrix: ")
for row in range(0, len(A)):
    for col in range(0, len(A[row])):
        print("\t", A[row][col], end='')
        if (row == col and row != 0 and col != 0) and (A[row-1][col-1] == A[row][col]):
            sameCount += 1
        elif row != col and A[row][col] != 0:
            flag = False
        if A[row][col] == 0:
            zeroCount += 1
    print()

print()
if zeroCount == (len(A) * len(A[0])):
    print("It's a Null matrix")
elif len(A) == len(A[0]):
    if(flag == True):
        if sameCount+1 == len(A):
            if A[0][0] == 1:
                print("It's a Identitiy matrix")
            else:
                print("It's a Scaler matrix")
        else:
            print("It's a Diagonal matrix")
    else:
        print("It's not a Diagonal neither Identity, Scaler or Null matrix. \nBut it's a Square matrix.")
else:
    print("It's a Rectangle matrix.")