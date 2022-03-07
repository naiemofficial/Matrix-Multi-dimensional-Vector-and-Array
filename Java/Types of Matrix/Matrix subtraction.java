class matrix_substraction {
    public static void main(String[] args) {
        int[][] A = {
            { 10, 20, 30 },
            { 40, 50, 60 },
            { 70, 80, 90 }
        };
        int[][] B = {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        };

        if(A.length == B.length && A[0].length == B[0].length){
            System.out.println("Matrix (after subtraction): ");
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + (A[row][col] - B[row][col]));
                }
                System.out.println();
            }
        }else{
            System.out.println("Error! Number of rows and columns must be same.");
        }
    }
}