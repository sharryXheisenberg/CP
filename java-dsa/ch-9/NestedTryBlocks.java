public  class NestedTryBlocks{
    public static void main(String[] args) {
        int number[] = {4,8,16,32,64,128,256,512};
        int denom[] = {2,0,4,4,0,8};

        try{    //outer try
            for(int i=0;i<number.length;i++){
                try {
                    System.out.println(number[i] + " / " + denom[i] + " is " + number[i]/denom[i]);
                } catch (ArithmeticException e) {
                    // catching the exception
                    System.out.println("Can't deivide by zero!");
                }
                System.out.println("OP bro!");
            }
        }catch(ArrayIndexOutOfBoundsException ex){
            // catching the outer exception
            System.out.println("No matching element found catched by outer catch statement");
            System.out.println("Fatal error - program terminated");
        }
    }
}