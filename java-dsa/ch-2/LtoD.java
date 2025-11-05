public class LtoD {
    public static void main(String[] args){
        long L;
        double D;
        L = 100123285L;
        D = L ; // here long to double type converion can happen
        System.out.println("L and D: "+ L + " " + D);

        //but double to long conversion cannot happen like this
        // L = D
    }
}
