class idempotent_matrix_validation {
    int[][] matrixMultiply(int[][] A, int[][] B){
        int[][] sum = new int[A.length][B[0].length];
        int calc;
        for (int row = 0; row < A.length; row++) {
            for (int col = 0; col < B[row].length; col++) {
                calc = 0;
                for (int m = 0; m < B.length; m++) {
                    calc += A[row][m] * B[m][col];
                }
                sum[row][col] = calc;
            }
        }
        return sum;
    }
    boolean validIdempotentMatrix(int[][] matrix, int[][] result){
        if(matrix.length == result.length && matrix[0].length == result[0].length){
            for (int row = 0; row < matrix.length; row++) {
                for (int col = 0; col < matrix[row].length; col++) {
                    if(matrix[row][col] != result[row][col])
                        return false;
                }
            }
        }else{
            return false;
        }
        return true;
    }
    public static void main(String[] args) {
        // Idempotent matrix is a square matrix which when multiplied by itself, gives back the same matrix (A^2 = A)
        int[][] matrix = {
            { 1, 2 },
            {-1,-2 }
        };
        int[][] result = {
            { 1, 2 },
            {-1,-2 }
        };

        idempotent_matrix_validation get = new idempotent_matrix_validation();
        if(get.validIdempotentMatrix(matrix, result) == true){
            System.out.println("Valid Idempotent matrix");
        }else{
            System.out.println("Invalid Idempotent matrix");
        }
    }
}