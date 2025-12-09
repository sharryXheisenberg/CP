
import java.util.*;



public class VectorDemo{
    public static void main(String[] args) {
        Vector<Integer>vec = new Vector<>(2);

        vec.add(1);
        vec.add(2);
        // vec.add(3);
        // vec.add(4);
        // vec.add(5);

        System.out.println("Size of vector " + vec.capacity());  // here capacity function is used instead of the size()

        // for Updating Elements set() method is used
        // It takes the index and the new element to replace the existing one at that position.

        System.out.println("Displaying the original vector before updating ");
    
        System.out.println("The object is replaced at: " + vec.set(0, 3));

        System.out.println("The object is replaced at: " + vec.set(1, 5));

        System.out.println("Updated vector" + vec);

        // in vector there is 1 based indexing 

        // removing the element from vector

        // To remove an element from a Vector, we can use the remove() method. This method is overloaded to perform multiple operations based on different parameters. They are:

        // remove(Object): Removes the first occurrence of the specified object.
        // remove(int index): Removes the element at the given index and shifts remaining elements to the left.


        Vector v = new Vector();
        v.add(1);
        v.add(1);
        v.add(2);
        v.add("Saurabh");
        v.add("OK");     
        
        v.remove(1);  // it should be remove the first occurence of the value 1

        System.out.println("After removal " + v);

    }
}