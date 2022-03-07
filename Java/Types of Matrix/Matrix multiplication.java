class matrix_multiplication {
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
        int[][] A = {
            { 1, -1 },
            { 0,  2 }
        };
        int[][] B = {
            { 1, 3, 0 },
            { 2, 0, 1 }
        };

        matrix_multiplication get = new matrix_multiplication();
        if(A[0].length == B.length){
            int[][] sum = get.matrixMultiply(A, B);

            // Print multiplied matrix
            System.out.println("Multiplied matrix: ");
            for (int row = 0; row < sum.length; row++) {
                for (int col = 0; col < sum[row].length; col++) {
                    System.out.print("\t" + sum[row][col]);
                }
                System.out.println();
            }
        }else{
            System.out.println("Error! Multiplication not possible");
        }
    }
}