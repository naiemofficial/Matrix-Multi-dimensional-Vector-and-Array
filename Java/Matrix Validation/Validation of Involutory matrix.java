class involutory_matrix_validation {
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
    boolean validIdentityMatrix(int[][] matrix){
        boolean flag = true; int sameCount = 0;
        if(matrix.length == matrix[0].length){
            for (int row = 0; row < matrix.length; row++) {
                for (int col = 0; col < matrix[row].length; col++) {
                    if((row == col && row != 0 && col != 0) && (matrix[(row-1)][(col-1)] == matrix[row][col])){
                        sameCount++;
                    }else if(row != col && matrix[row][col] != 0){
                        flag = false;
                    }
                }
            }
            if(flag == true && (sameCount+1) == matrix.length){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }
    boolean validInvolutoryMatrix(int[][] matrix, int[][] result){
        if(validIdentityMatrix(result)){
            matrix = matrixMultiply(matrix, matrix);
            if(matrix.length == result.length && matrix[0].length == result[0].length){
                for (int row = 0; row < matrix.length; row++) {
                    for (int col = 0; col < matrix[row].length; col++) {
                        if(matrix[row][col] != result[row][col])
                            return false;
                    }
                }
            }
        }else{
            return false;
        }
        return true;
    }
    public static void main(String[] args) {
        // Involutory matrix if matrix multiply by itself return the identity matrix. (A^2 = I)
        int[][] matrix = {
            { 2, 3 },
            {-1,-2 }
        };
        int[][] result = {
            { 1, 0 },
            { 0, 1 }
        };

        involutory_matrix_validation get = new involutory_matrix_validation();
        if(get.validInvolutoryMatrix(matrix, result) == true){
            System.out.println("Valid Involutory matrix");
        }else{
            System.out.println("Invalid Involutory matrix");
        }
    }
}