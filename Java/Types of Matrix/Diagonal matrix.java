class diagonal_matrix {
    public static void main(String[] args) {
        // Diagonal matrix is if the elements of matrix except main diagonal are zero.
        int[][] A = {
            { 1, 0, 0 },
            { 0, 5, 0 },
            { 0, 0, 9 }
        };

        if (A.length == A[0].length) {
            System.out.println("Diagonal matrix: ");
            boolean error = false;
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                    if(row != col && A[row][col] != 0) error = true;
                }
                System.out.println();
            }

            if(error) System.out.println("=> Invalid Diagonal Matrix.");
        } else {
            System.out.println("Error! Number of rows and columns must be same.");
        }
    }
}