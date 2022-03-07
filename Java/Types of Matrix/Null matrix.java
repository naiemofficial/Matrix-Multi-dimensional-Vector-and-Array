class null_matrix {
    public static void main(String[] args) {
        // Null matrix is if all the elements are zero in a matrix
        int[][] A = {
            { 0, 0, 0 },
            { 0, 0, 0 },
            { 0, 0, 0 }
        };

        System.out.println("Null matrix: ");
        boolean error = false;
        for (int row = 0; row < A.length; row++) {
            for (int col = 0; col < A[row].length; col++) {
                System.out.print("\t" + A[row][col]);
                if(A[row][col] != 0) error = true;
            }
            System.out.println();
        }
        if (error) System.out.println("=> This isn't a null matrix.");
    }
}