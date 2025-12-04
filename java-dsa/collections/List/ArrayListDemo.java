
import java.util.ArrayList;

// An ArrayList in Java is a resizable (or dynamic) array from the java.util package that can grow or shrink automatically as elements are added or removed, unlike regular arrays with a fixed size.

// Indexed Access: Elements can be accessed using their index, just like arrays.
// Allows Duplicates: Duplicate elements are allowed.
// Maintains Insertion Order: Elements are stored in the order they are inserted.
// Not Synchronized: ArrayList is not thread-safe. To make it thread-safe, you must wrap it manually using Collections.synchronizedList().



// ArrayList(Collection<? extends E> c)
// Creates an ArrayList initialized with elements from the specified collection.

// ArrayList<String> arr = new ArrayList<>(collection); 


public class ArrayListDemo{
    public static void main(String[] args) {
        ArrayList<Integer>a = new ArrayList<>();
        a.add(1);
        a.add(2);
        a.add(3);

        System.out.println(a);

        ArrayList<String> al = new ArrayList<>();
        al.add("Saurabh");
        al.add("Anurag");
        al.add("Vaibhav");
        al.add("Ashish");

        al.add(1,"Yo"); // it insert element at that position and shifts all others elements to the right 
        System.out.println("After adding element at index 1" + al);
        System.out.println("\n");
        
        // removing the element
        al.remove(0);
        System.out.println("After removing the first element " + al);

        // 3. Updating value at index 0
       
        al.set(3,"Talwiinder");  // it updates the value at specified index

        System.out.println("\n");
        System.out.println("List after updating the list" + al);

        ArrayList<Integer>newOne= new ArrayList<>();
        newOne.addAll(a);

        System.out.println("Adding a list to newOne by using addAll " + newOne ) ;

    }
}