class squareRectangle_Matrix_validation {
    public static void main(String[] args) {
        int[][] A = {
            { 1, 2, 3 },
            { 4, 5, 6 }
        };
        
        if (A.length == A[0].length) {
            System.out.println("It's a Square matrix");
        } else {
            System.out.println("It's a Rectangle matrix");
        }
    }
}