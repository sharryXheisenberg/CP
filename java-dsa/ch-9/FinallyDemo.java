class UseFinally{
    public static void genException(int what){
        int t;
        int nums[] = new int[2];


        System.out.println("Receiving " + what);
        try {
            switch(what){
                case 0:
                    t = 10 / what;   // it generated divide by zero error
                    break;
                case 1:
                    nums[4] = 4;
                    break;
                case 2:
                    return ;    // return from try block
            }
        } 
        catch (ArithmeticException e) {
            System.out.println("Can't divide by zero!");
            return ; 
        }
        catch (ArrayIndexOutOfBoundsException e){
            System.out.println("No matching element found");
        }
        finally{
            System.out.println("Leaving try.");  //This is executed on the way out of try/catch blocks and this will be execute 
        }
    }
}

public  class FinallyDemo{
    public static void main(String[] args) {
        for(int i=0;i<3;i++){
            UseFinally.genException(i);
            System.out.println();
        }
    }
} 

