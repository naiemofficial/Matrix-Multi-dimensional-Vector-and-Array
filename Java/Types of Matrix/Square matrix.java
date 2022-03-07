class square_matrix {
    public static void main(String[] args) {
        // Square matrix is that rows and columns number is same
        int[][] A = {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        };

        if (A.length == A[0].length) {
            System.out.println("Square matrix: ");
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }
        } else {
            System.out.println("Error! This isn't an square matrix. Number of rows and columns must be same");
        }
    }
}