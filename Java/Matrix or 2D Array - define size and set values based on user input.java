// Use IDE to get inline input. Integrated terminal or code editors may not work to get inline input (e.g. VSCode)
import java.util.Scanner;
class matrixUserInput {
    public static void main(String[] args){
        java.util.Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int row_in = input.nextInt(); input.nextLine();
        System.out.print("Enter the number of columns: ");
        int col_in = input.nextInt();

        if((row_in > 1 && col_in >= 1) || (row_in >= 1 && col_in > 1)){
            int[][] A = new int[row_in][col_in];
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t");
                    A[row][col] = input.nextInt();
                }
                System.out.println();
            }

            System.out.println("Matrix: A");
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col]);
                }
                System.out.println();
            }
        } else {
            System.out.println("Error! A Matrix must have either 1 row and multple columns or multiple rows and multiple column.");
        }
    }
}