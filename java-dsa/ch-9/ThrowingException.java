public class ThrowingException{
    public static void main(String[] args) {
        try {
            System.out.println("Before throws!");
            throw new ArithmeticException();
        } catch (ArithmeticException e) {
            System.out.println("Exception caught using throws keyword");
        }
        System.out.println("After try/catch block");
    }
}