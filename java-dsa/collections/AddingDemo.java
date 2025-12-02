import java.util.*;

public class AddingDemo{
    public static void main(String[] args) {
        Collection<Integer> numbers = new ArrayList<>();
        numbers.add(1);
        numbers.add(2);
        numbers.add(3);
        numbers.add(4);
        numbers.add(5);

        //creating new collection 
        Collection<Integer> moreNumbers = new ArrayList<>();
        moreNumbers.add(10);
        moreNumbers.add(20);

        numbers.addAll(moreNumbers);
        System.out.println("After adding elements " + numbers);
        
    }
}