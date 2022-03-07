class skewSymmetric_matrix_NP {
    public static void main(String[] args) {
        // Skew-symmetric, if transpose of matrix A is equal to negative of matrix (A' = -A)
        int[][] A = {
            { 0,  1,  2 },
            {-1,  0,  3 },
            {-2, -3,  0 }
        };

        if (A.length == A[0].length) {
            System.out.println("Matrix: ");
            // Transpose here to B[][] using for loop
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                    if(A[row][col] > 0){
                       A[row][col] = A[row][col]-(A[row][col] * 2); 
                    }else{
                        A[row][col] = A[row][col]+((A[row][col] * -1) * 2); 
                    }
                }
                System.out.println();
            }

            // Print skew-symmetric matrix
            System.out.println("\nSkew-symmetric Matrix: ");
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }
        } else {
            System.out.println("Error! Number of rows and columns must be same");
        }
    }
}