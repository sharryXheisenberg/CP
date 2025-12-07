class ExcTest{
    static void genException(){
        int nums[] = new int[4];
        System.out.println("Before exception is generated!");
        nums[8] = 10;
        System.out.println("this won't be displayed");
    }
}

class ExcDemo2{
    public static void main(String[] args) {
        try {
            ExcTest.genException();
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Index out of bounds");
    }
    System.out.println("After the catch stament ");
 }
}