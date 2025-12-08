  class ExcTest{
    static  void genExecption(){
        int nums[] = new int[4];

        System.out.println("Before exception is generated. ");
        nums[7] = 10;
        System.out.println("This is will not be display!");
    }
}

public  class UseThrowableMethods{
    public static void main(String[] args) {
        try {
            ExcTest.genExecption();
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error in standard message is: ");
            System.out.println(e);
            System.out.println("\nStack trace: ");
            e.printStackTrace();
            System.out.println("\nGet message");
            e.getMessage();
            System.out.println("\nLocalized Message");
            e.getLocalizedMessage();
            System.out.println("\ntoString method");
            e.toString();
            // System.out.println("\ncompleted \r\n" + //
            //                     "stack trace.");
            // e.fillInStackTrace();
        }
    }
}


// 