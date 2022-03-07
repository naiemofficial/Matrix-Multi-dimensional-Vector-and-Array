class matrixPrint_whileLoop {
    public static void main(String[] args){
        int[][] A = {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        };
        System.out.println("Matrix: A");
        int row = 0;
        while (row < A.length) {
            int col = 0;
            while (col < A[row].length) {
                System.out.print("\t" + A[row][col]);
                col++;
            }
            row++;
            System.out.println();
        }
    }
}