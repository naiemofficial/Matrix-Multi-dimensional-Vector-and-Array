class row_matrix {
    public static void main(String[] args) {
        // Row matrix is that has 1 row and multiple columns
        int[][] A = {
            { 1, 2, 3 }
        };
        
        if (A.length == 1 && A[0].length > 1) {
            System.out.println("Row matrix: ");
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }
        } else {
            System.out.println("=> This isn't a row matrix.");
        }
    }
}