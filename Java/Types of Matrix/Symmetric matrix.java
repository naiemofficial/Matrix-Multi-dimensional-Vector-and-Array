class symmetric_matrix {
    public static void main(String[] args) {
        // Symmetric matrix is, if the transpose of that matrix is equal to itself (A' = A)
        int[][] A = {
            { 1, 2, 3 },
            { 2, 4, 5 },
            { 3, 5, 6 }
        };
        int[][] B = new int[A.length][A[0].length];

        if (A.length == A[0].length) {
            System.out.println("Matrix: ");
            // Transpose here to B[][] using for loop
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    B[col][row] = A[row][col];
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }

            // Print transposed matrix
            System.out.println("\nSymmetric matrix: ");
            for (int row = 0; row < B.length; row++) {
                for (int col = 0; col < B[row].length; col++) {
                    System.out.print("\t" + B[row][col]);
                }
                System.out.println();
            }
        } else {
            System.out.println("Error! Number of rows and columns must be same");
        }
    }
}