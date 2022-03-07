class matrix_initValue {
    public static void main(String[] args){
        // (2row X 3columns)      // ╔═════════╦═════════╦═════════╗
        int[][] A = {             // ║  A[0][0]    A[0][1]     A[0][2]  ║
            { 10,    20,   30 },  // ╠═════════╬═════════╬═════════╣
            { 40,    50,   60 }   // ║  A[1][0]    A[1][1]     A[1][2]  ║
        };                        // ╚═════════╩═════════╩═════════╝

        System.out.println("Matrix: A");
        System.out.print("\t" + A[0][0]);
        System.out.print("\t" + A[0][1]);
        System.out.println("\t" + A[0][2]);
        System.out.print("\t" + A[1][0]);
        System.out.print("\t" + A[1][1]);
        System.out.println("\t" + A[1][2]);
    }
}