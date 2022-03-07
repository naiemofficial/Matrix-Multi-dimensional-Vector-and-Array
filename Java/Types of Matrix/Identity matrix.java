class identity_matrix {
    public static void main(String[] args) {
        // Identity matrix is if the diagonal elements are 1 and other elements are zero.
        int[][] A = {
            { 1, 0, 0 },
            { 0, 1, 0 },
            { 0, 0, 1 }
        };

        if (A.length == A[0].length) {
            System.out.println("Identity matrix: ");
            boolean error = false;
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                    if((row != col && A[row][col] != 0) || (row == col && A[row][col] != 1)) error = true;
                }
                System.out.println();
            }

            if (error) System.out.println("=> Invalid Identity Matrix.");
        } else {
            System.out.println("Error! This isn't an Identity matrix. Number of rows and columns must be same");
        }
    }
}