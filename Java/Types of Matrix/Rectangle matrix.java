class rectangle_matrix {
    public static void main(String[] args) {
        // Rectangle matrix is that rows and columns number isn't same
        int[][] A = {
            { 1, 2, 3 },
            { 4, 5, 6 }
        };

        if (A.length != A[0].length) {
            System.out.println("Rectangle matrix: ");
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }
        } else {
            System.out.println("Error! This isn't a rectangle matrix. Number of rows and columns can't be same");
        }
    }
}