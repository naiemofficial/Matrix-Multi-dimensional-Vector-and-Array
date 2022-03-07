class conjugate_transpose_skew {
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
    String conjugate(String expression, boolean call){
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
                    if(isNumeric(val) && call == true){ // default expression only
                        if(Integer.parseInt(val) != 0){
                            switch (operator) {
                                case '+': sn += Integer.parseInt(val); break;
                                case '-': sn -= Integer.parseInt(val); break;
                            }
                        }
                    } else { // default expression and nagetive multiplication
                        switch (operator) {
                            case '+': expression += '-' + val; break;
                            case '-': expression += '+' + val; break;
                        }
                    }
                } 
            } 
        }
        if(sn == 0 && expression.length() == 0){
            expression = Integer.toString(sn);
        }else if(sn != 0){
            expression = sn + expression;
        }
        if(isOperator(expression.charAt(0)) && (expression.charAt(0)  == '+' || expression.equals("-0"))){
            expression = expression.substring(1);
        }
        return expression.strip();
    }
    public static void main(String[] args) {
        String[][] A = {
            { "-i", "2+i" },
            { "-2+i", "0" }
        };

        
        String[][] B = new String[A[0].length][A.length]; // A^H or A^†
        String[][] C = new String[A.length][A[0].length]; // -A

        conjugate_transpose_skew get = new conjugate_transpose_skew();
        System.out.println("Main Matrix (A): ");
        for (int row = 0; row < A.length; row++) {
            for (int col = 0; col < A[row].length; col++) {
                System.out.print("\t" + A[row][col] + "\t");
                B[col][row] = get.conjugate(A[row][col], true); // true => will return default processed expression 
                C[row][col] = get.conjugate(A[row][col], false); // false => will return nagetive multiplication expression, or (-A). [Note: Multiplication used on the same method to reduce the codes]
            }
            System.out.println();
        }

        // Check if any element/expression has error
        if(A.length == A[0].length){
            boolean error = false;  boolean hermithian = true;
            for (int row = 0; row < B.length; row++) {
                for (int col = 0; col < B[row].length; col++) {
                    if(B[row][col] == "error" && error == false) error = true;
                    if( !(A[row][col].equals(B[row][col])) && hermithian == true ){
                        hermithian = false;
                    }
                }
            }
        
            if(error){
                System.out.println("\nError! Invalid expression used.");
            } else {
                boolean skew_validation = true;
                System.out.println("\n╔══════════════════════════════════════════╗");
                System.out.println("  A^†: ");
                for (int row = 0; row < B.length; row++) {
                    for (int col = 0; col < B[row].length; col++) {
                        System.out.print("\t" + B[row][col] + "\t");
                        if (!B[row][col].equals(C[row][col]) && skew_validation == true) {
                            skew_validation = false;
                        }
                    }
                    System.out.println();
                }
                
                System.out.println("╠══════════════════════════════════════════╣");

                System.out.println("  -A: ");
                for (int row = 0; row < C.length; row++) {
                    for (int col = 0; col < C[row].length; col++) {
                        System.out.print("\t" + C[row][col] + "\t");
                    }
                    System.out.println();
                }
                System.out.println("╚══════════════════════════════════════════╝");
                
                if (skew_validation) {
                    System.out.println("↳ (A^† = -A) Therefore, it's a Skew-Hermithian matrix");
                } else {
                    System.out.println("↳ (A^† ≠ -A) Therefore, it's not a Skew-Hermithian matrix");
                }
            }

        } else {
            System.out.println("\nError! The main matrix must be an square to be a Skew-hermethian matrix.");
        }
    }
}