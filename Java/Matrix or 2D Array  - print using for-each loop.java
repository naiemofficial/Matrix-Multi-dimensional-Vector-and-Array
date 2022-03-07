class matrixPrint_forEachLoop {
    public static void main(String[] args){
        // (2row X 3columns)
        int[][] A = {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        };
        System.out.println("Matrix: A");
        for (int[] row:A) {
            for (int col:row) {
                System.out.print("\t" + col);
            }
            System.out.println();
        }
    }
}