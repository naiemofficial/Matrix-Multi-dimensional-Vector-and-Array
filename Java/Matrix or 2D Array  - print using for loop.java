class matrixPrint_forLoop {
    public static void main(String[] args){
        // (2row X 3columns)
        int[][] A = {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        };
        System.out.println("Matrix: A");
        for (int row = 0; row < A.length; row++) {
            for (int col = 0; col < A[row].length; col++) {
                System.out.print("\t" + A[row][col]);
            }
            System.out.println();
        }
    }
}