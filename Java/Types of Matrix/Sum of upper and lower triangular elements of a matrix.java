class sum_upper_lower_triangular {
    public static void main(String[] args) {
        int[][] A = {
                { 1, 2, 3 },
                { 4, 5, 6 },
                { 7, 8, 9 }
        };
        System.out.println("Matrix: ");
        int Ut=0, Lt=0; 
        for (int row = 0; row < A.length; row++) {
            for (int col = 0; col < A[row].length; col++) {
                if(row <= col)
                    Ut += A[row][col];      // Upper Triangular
                if(row >= col)
                    Lt += A[row][col];      // Lower Triangular
                System.out.print("\t" + A[row][col]);
            }
            System.out.println();
        }
        System.out.println("\nSum of Upper Triangular = " + Ut);
        System.out.println("Sum of Lower Triangular = " + Lt);
    }
}