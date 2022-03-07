class sum_diagonals {
    public static void main(String[] args) {
        int[][] A = {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        };

        if (A.length == A[0].length) {
            System.out.println("Diagonal matrix: ");
            int main_diagonal = 0, secondary_diagonal = 0;
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                    if(row == col)
                        main_diagonal += A[row][col];
                    if((row+col) == (A.length-1))
                        secondary_diagonal += A[row][col];
                }
                System.out.println();
            }
            System.out.println("\nSum of diagonals = " + (main_diagonal + secondary_diagonal));
            System.out.println("Sum of main diagonal = " + main_diagonal);
            // Secondary diagonal is the flip of a main/primary diagonal (or upper-right to -> lower-left diagonal)
            System.out.println("Sum of secondary diagonal = " + secondary_diagonal);
        } else {
            System.out.println("Error! Number of rows and columns must be same.");
        }
    }
}