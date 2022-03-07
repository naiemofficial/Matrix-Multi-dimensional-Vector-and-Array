class matrix_setIndexValue {
    public static void main(String[] args){
        // Initialize 2D Array as (2row X 3columns)
        int[][] A = new int[2][3];

        // Set value
        A[0][0] = 10;    // ╔═════════╦═════════╦═════════╗
        A[0][1] = 20;    // ║  A[0][0]    A[0][1]     A[0][2]  ║
        A[0][2] = 30;    // ╠═════════╬═════════╬═════════╣
        A[1][0] = 40;    // ║  A[1][0]    A[1][1]     A[1][2]  ║
        A[1][1] = 50;    // ╚═════════╩═════════╩═════════╝
        A[1][2] = 60;

        System.out.println("Matrix: A");
        System.out.print("\t" + A[0][0]);
        System.out.print("\t" + A[0][1]);
        System.out.println("\t" + A[0][2]);
        System.out.print("\t" + A[1][0]);
        System.out.print("\t" + A[1][1]);
        System.out.println("\t" + A[1][2]);
    }
}