class scaler_matrix {
    public static void main(String[] args) {
        // Scaler matrix is if the diagonal elements are same number and other elements are zero.
        int[][] A = {
            { 5, 0, 0 },
            { 0, 5, 0 },
            { 0, 0, 5 }
        };

        if (A.length == A[0].length) {
            System.out.println("Scaler matrix: ");
            boolean error = false; int sameCount = 0;
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                    if(row != col && A[row][col] != 0) error = true;
                    if((row == col && row != 0 && col != 0) && (A[row-1][col-1] == A[row][col])){
                        sameCount++;
                    }
                }
                System.out.println();
            }
            if(error || sameCount+1 != A.length) System.out.println("=> This isn't a scaler matrix.");
        } else {
            System.out.println("Error! This isn't an Scaler matrix. Number of rows and columns must be same");
        }
    }
}