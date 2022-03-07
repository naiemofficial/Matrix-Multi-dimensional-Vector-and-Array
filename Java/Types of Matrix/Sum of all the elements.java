class matrix_sum {
    public static void main(String[] args) {
        // (3row X 3columns)
        int[][] A = {
                { 1, 2, 3 },
                { 4, 5, 6 },
                { 7, 8, 9 }
        };
        
        System.out.println("Matrix: ");
        int sum = 0;
        for (int row = 0; row < A.length; row++) {
            for (int col = 0; col < A[row].length; col++) {
                sum += A[row][col];
                System.out.print("\t" + A[row][col]);
            }
            System.out.println();
        }
        System.out.println("\nSum of all the elements of matrix = " + sum);
    }
}