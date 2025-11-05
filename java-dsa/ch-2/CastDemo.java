public class CastDemo {
    public static void main(String[] args) {
        double x,y;
        byte b;
        int i;
        char ch;

        x = 10.0;
        y = 3.0;

        i = (int) (x/y);
        System.out.println("Integer outcome of x/y: "+i);
         i=100;
         b=(byte) i;
         System.out.println("Value of b :"+ b);

         b = 88;    // ascii value of x
         ch = (char) b;
         System.out.println("ch: "+ch);
    }    
}
// if in the expression contains the any double value or var then all value becomes to the double or all type conversion 