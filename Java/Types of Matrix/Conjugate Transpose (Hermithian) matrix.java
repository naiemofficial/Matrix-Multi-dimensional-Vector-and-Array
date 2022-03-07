class conjugate_transpose {
    boolean isNumeric(String value){
        try {
            Integer.parseInt(value);
            return true;
        } catch (NumberFormatException error) {
            return false;
        }
    }
    boolean isOperator(char operator){
        if(operator == '+' || operator == '-'){
            return true;
        }else{
            return false;
        }
    }
    String conjugate(String expression){
        String[] chs = expression.split("(?=[-+*/])");
        int sn = 0; // sum of numerics
        expression = "";
        for (int i = 0; i < chs.length; i++) {
            String val = chs[i];
            if(val.length() > 0){
                char operator = 0;
                if(isOperator(val.charAt(0))){
                    operator = val.charAt(0);
                    val = val.substring(1);
                } else if (i == 0) {
                    operator = '+';
                }

                if(val.replaceAll("^(\\d*?[a-zA-Z$])", "").length() > 0 && !isNumeric(val)){
                    return "error";
                }else{
                    if(isNumeric(val)){
                        if(Integer.parseInt(val) != 0){
                            switch (operator) {
                                case '+': sn += Integer.parseInt(val); break;
                                case '-': sn -= Integer.parseInt(val); break;
                            }
                        }
                    }else{
                        switch (operator) {
                            case '+': expression += '-' + val; break;
                            case '-': expression += '+' + val; break;
                        }
                    }
                }
            }
        }
        if (sn == 0 && expression.length() == 0) {
            expression = Integer.toString(sn);
        } else if (sn != 0) {
            expression = sn + expression;
        }
        
        if (isOperator(expression.charAt(0)) && (expression.charAt(0) == '+' || expression.equals("-0"))) {
            expression = expression.substring(1);
        }
        return expression.strip();
    }
    public static void main(String[] args) {
        String[][] A = {
            { "2", "3-i" },
            { "3+i", "3" }
        };

        String[][] B = new String[A[0].length][A.length];

        conjugate_transpose get = new conjugate_transpose();
        System.out.println("Matrix: ");
        for (int row = 0; row < A.length; row++) {
            for (int col = 0; col < A[row].length; col++) {
                System.out.print("\t" + A[row][col] + "\t");
                B[col][row] = get.conjugate(A[row][col]);
            }
            System.out.println();
        }

        // Check if any element/expression has error
        boolean error = false; boolean hermithian = true;
        for (int row = 0; row < B.length; row++) {
            for (int col = 0; col < B[row].length; col++) {
                if(B[row][col] == "error" && error == false) error = true;
                if( (A.length != A[row].length || !A[row][col].equals(B[row][col])) && hermithian == true ){
                    hermithian = false;
                }
            }
        }
        
        
        if(error){
            System.out.println("\nError! Invalid expression used.");
        } else {
            System.out.println("\nConjugate transpose (Hermithian): ");
            for (int row = 0; row < B.length; row++) {
                for (int col = 0; col < B[row].length; col++) {
                    System.out.print("\t" + B[row][col] + "\t");
                }
                System.out.println();
            }

            // Hermitian matrix is, when the conjugate transpose of a complex square matrix is equal to itself
            if(hermithian){
                System.out.println("\n^ The matrix is Hermithian");
            }else{
                System.out.println("\n^ The matrix isn't Hermithian");
            }
        }
    }
}