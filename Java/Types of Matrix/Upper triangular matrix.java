class upperTriangular_matrix {
    public static void main(String[] args){
        // (3row X 3columns)    // ╔═══╦═══╦═══╗
        int[][] A = {           // ║ 1    2    3 ║
            { 1, 2, 3 },        // ╠═══╬═══╬═══╣
            { 0, 5, 6 },        // ║      5    6 ║
            { 0, 0, 9 }         // ╠═══╬═══╬═══╣
        };                      // ║           9 ║
        //                      // ╚═══╩═══╩═══╝
        if(A.length == A[0].length){
            System.out.println("Upper Triangular matrix: ");
            int sum = 0; boolean error = false;
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    if(row <= col){
                        sum += A[row][col];
                    } else if (A[row][col] != 0) {
                        error = true;
                    }
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }
            System.out.println("Sum of upper triangular matrix is = " + sum);
            if (error) System.out.println("=> Invalid Upper Triangular matrix.");
        } else {
            System.out.println("Error! Number of rows and columns must be same.");
        }
    }
}