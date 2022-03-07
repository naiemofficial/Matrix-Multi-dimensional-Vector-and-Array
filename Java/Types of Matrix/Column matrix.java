class column_matrix {
    public static void main(String[] args) {
        // Column matrix is that has 1 column and multiple rows
        int[][] A = {
            { 1 },
            { 2 },
            { 3 }
        };
        
        if(A.length > 1 && A[0].length == 1){
            System.out.println("Column matrix: ");
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }
        }else{
            System.out.println("=> This isn't a column matrix.");
        }
    }
}