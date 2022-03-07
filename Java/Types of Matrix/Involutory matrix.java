class involutory_matrix {
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
        // Involutory matrix if matrix multiply by itself return the identity matrix. (A^2 = I)
        int[][] A = {
            { 2, 3 },
            {-1,-2 }
        };
        
        if(A.length == A[0].length){
            System.out.println("Matrix: ");
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }
            
            involutory_matrix get = new involutory_matrix();
            int[][] result = get.matrixMultiply(A, A);
            // Print idempotent matrix after calculation
            System.out.println("\nInvolutory matrix: ");
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