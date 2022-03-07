class zeroPower_matrix {
    int[][] matrixMultiply(int[][] A, int[][] B){
        int[][] result = new int[A.length][B[0].length];
        int calc;
        for (int row = 0; row < A.length; row++) {
            for (int col = 0; col < B[row].length; col++) {
                calc = 0;
                for (int m = 0; m < B.length; m++) {
                    calc += A[row][m] * B[m][col];
                }
                result[row][col] = calc;
            }
        }
        return result;
    }
    public static void main(String[] args) {
        // Zero matrix is just a matrix with any dimensions that has all elements inside the matrix as zero
        int[][] A = {
            { 0, 1 },
            { 0, 0 }
        };
        
        if(A.length == A[0].length){
            System.out.println("Matrix: ");
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }
            
            zeroPower_matrix get = new zeroPower_matrix();
            int[][] result = get.matrixMultiply(A, A);
            // Print Zero Power matrix after calculation
            System.out.println("\nZero Power matrix: ");
            boolean error = false;
            for (int row = 0; row < result.length; row++) {
                for (int col = 0; col < result[row].length; col++) {
                    System.out.print("\t" + result[row][col]);
                    if(result[row][col] != 0) error = true;
                }
                System.out.println();
            }
            if(error) System.out.println("=> Not a valid zero power matrix.");
        }else{
            System.out.println("Error! Multiplication not possible");
        }
    }
}