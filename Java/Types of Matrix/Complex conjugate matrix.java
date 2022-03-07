class conjugate_matrix {
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
        if(sn == 0 && expression.length() == 0){
            expression = Integer.toString(sn);
        }else if(sn != 0){
            expression = sn + expression;
        }
        if (isOperator(expression.charAt(0)) && (expression.charAt(0) == '+' || expression.equals("-0"))) {
            expression = expression.substring(1);
        }
        return expression.strip();
    }
    
    public static void main(String[] args) {
        String[][] A = {
            { "i", "2+i" },
            { "5", "5" },
            { "9+7i", "-3-3i" }
        };

        conjugate_matrix get = new conjugate_matrix();
        System.out.println("Matrix: ");
        for (int row = 0; row < A.length; row++) {
            for (int col = 0; col < A[row].length; col++) {
                System.out.print("\t" + A[row][col] + "\t");
                if(get.isNumeric(A[row][col]) != true){
                    A[row][col] = get.conjugate(A[row][col]);
                }
            }
            System.out.println();
        }

        // Check if any element/expression has error
        boolean error = false;
        for (int row = 0; row < A.length; row++) {
            for (int col = 0; col < A[row].length; col++) {
                if(A[row][col] == "error"){
                    error = true;
                    break;
                }
            }
        }
        System.out.println("\nComplex conjugate: ");
        if(error){
            System.out.println("Error! Invalid expression used.");
        } else {
            for (int row = 0; row < A.length; row++) {
                for (int col = 0; col < A[row].length; col++) {
                    System.out.print("\t" + A[row][col] + "\t");
                }
                System.out.println();
            }
        }
    }
}