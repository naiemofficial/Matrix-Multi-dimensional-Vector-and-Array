class idempotent_matrix {
    int[][] matrixMultiply(int[][] A, int[][] B) {
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
        // Idempotent matrix is a square matrix which when multiplied by itself, gives back the same matrix (A^2 = A)
        int[][] A = {
            { 2,  1 },
            {-2, -1 }
        };
        
        if(A.length == A[0].length){
            System.out.println("Matrix: ");
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }
            
            idempotent_matrix get = new idempotent_matrix();
            int[][] result = get.matrixMultiply(A, A);
            // Print idempotent matrix after calculation
            System.out.println("\nIdempotent matrix: ");
            for (int row = 0; row < result.length; row++) {
                for (int col = 0; col < result[row].length; col++) {
                    System.out.print("\t" + result[row][col]);
                }
                System.out.println();
            }
        }else{
            System.out.println("Error! Multiplication not possible");
        }
    }
}