class lowerTriangular_matrix {
    public static void main(String[] args){
        // (3row X 3columns)    // ╔═══╦═══╦═══╗
        int[][] A = {           // ║ 1           ║
            { 1, 0, 0 },        // ╠═══╬═══╬═══╣
            { 4, 5, 0 },        // ║ 4    5      ║
            { 7, 8, 9 }         // ╠═══╬═══╬═══╣
        };                      // ║ 7    8    9 ║
                                // ╚═══╩═══╩═══╝
        if (A.length == A[0].length) {
            System.out.println("Lower Triangular matrix: ");
            int sum = 0; boolean error = false;
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    if (row >= col) {
                        sum += A[row][col];
                    } else if (A[row][col] != 0){
                        error = true;
                    }
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }
            System.out.println("Sum of lower triangular matrix is = " + sum);
            if (error) System.out.println("=> Invalid Lower Triangular matrix.");
        } else {
            System.out.println("Error! Number of rows and columns must be same.");
        }
    }
}