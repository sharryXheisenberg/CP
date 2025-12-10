
class NonIntResultException extends Exception {
    int n;
    int d;

    NonIntResultException(int i,int j){
        n = i;
        d = j;
    }
    public String toString(){
        return "Result of " + n + " / " + d + " is non-integer.";
    }
}

public class CustomExceptDemo{
    public static void main(String[] args) {
        int number[] = {4, 8, 15, 32, 64, 127, 256, 512 };
        int denom[]   = { 2, 0, 4, 4, 0, 8};

        int m = Math.min(number.length, denom.length);

        for(int i = 0; i < m; i++){
            try {
                if (denom[i] == 0) {
                    throw new ArithmeticException();
                }
                if (number[i] % denom[i] != 0) {
                    throw new NonIntResultException(number[i], denom[i]);
                }
                System.out.println(number[i] + " / " + denom[i] + " is " + (number[i] / denom[i]));
            } catch (NonIntResultException ex) {
                System.out.println(ex);
            } catch (ArithmeticException ex) {
                System.out.println("Can't divide by zero!");
            }
        }

        if (number.length > denom.length) {
            System.out.println("No matching element is found for some numbers!");
        }
    }
}