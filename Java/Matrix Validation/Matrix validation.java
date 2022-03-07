class matrix_validation {
    public static void main(String[] args) {
        int[][] A = {
            { 1, 0, 0 },
            { 0, 1, 0 },
            { 0, 0, 1 }
        };
        
        boolean flag = true; int sameCount = 0, zeroCount = 0;  
        System.out.println("Matrix: ");
        for (int row = 0; row < A.length; row++) {
            for (int col = 0; col < A[row].length; col++) {
                System.out.print("\t" + A[row][col]);
                if((row == col && row != 0 && col != 0) && (A[row-1][col-1] == A[row][col])){
                    sameCount++;
                }else if(row != col && A[row][col] != 0){
                    flag = false;
                }
                if (A[row][col] == 0) {
                    zeroCount++;
                }
            }
            System.out.println();
        }
        
        System.out.println();
        if (zeroCount == (A.length * A[0].length)) {
            System.out.println("It's a Null matrix");
        }else if(A.length == A[0].length){
            if(flag == true){
                if((sameCount+1) == A.length){
                    if(A[0][0] == 1){
                        System.out.println("It's a Identitiy matrix");
                    }else{
                        System.out.println("It's a Scaler matrix");
                    }
                }else{
                    System.out.println("It's a Diagonal matrix");
                }
            }else{
                System.out.println("It's not a Diagonal neither Identity, Scaler or Null matrix. \nBut it's a Square matrix.");
            }
        }else if(A.length == 1 && A[0].length > 1){
            System.out.println("It's a Row matrix.");
        }else if(A.length > 1 && A[0].length == 1){
            System.out.println("It's a Column matrix.");
        }else{
            System.out.println("It's a Rectangle matrix.");
        }
    }
}