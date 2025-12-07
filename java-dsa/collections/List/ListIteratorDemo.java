import java.util.ArrayList;
import java.util.ListIterator;

public class ListIteratorDemo{
    public static void main(String[] args) {
          ArrayList<String> a1 = new ArrayList<>();
        a1.add("A");
        a1.add("B");
        a1.add("C");

        ListIterator<String>i = a1.listIterator();

        System.out.println("Iterating a1 list through the list:" );
        while(i.hasNext()){
            System.out.println(i.next());
        }
    }
  
}