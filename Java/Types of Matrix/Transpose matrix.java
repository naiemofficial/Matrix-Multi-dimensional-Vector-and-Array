class transpose_matrix {
    public static void main(String[] args) {
        // Transpose matrix is interchanging its rows into columns or columns into rows (A = A' (or A^T))
        int[][] A = {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        };
        int[][] B = new int[A[0].length][A.length];

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
        System.out.println("\nTranspose matrix: ");
        for (int row = 0; row < B.length; row++) {
            for (int col = 0; col < B[row].length; col++) {
                System.out.print("\t" + B[row][col]);
            }
            System.out.println();
        }
    }
}