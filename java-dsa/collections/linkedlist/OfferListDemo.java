//offer() Method
// This method is used to add an element to the last or end part of a LinkedList. This method is also used in the queue interface that is internally used in the LinkedList. This method does not throw any exception, unlike the add() method.

// Return Type: This method returns a Boolean value. If the element is successfully added to our LinkedList, then it returns true; otherwise, it returns false.


import java.util.*;

public class OfferListDemo{
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();

        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);

        list.offer(7); // this methods adds element at the last or at the end part

        System.out.println("The ll is "+ list);


        // offerFirst()  and offerLast();

        LinkedList jd = new LinkedList();

        jd.add(1);
        jd.add("Saurabh");
        jd.add(3);
        jd.add("Pande");
        jd.add(4);
        jd.add("Anurag");

        jd.offerFirst("KOOP");
        jd.offerLast(10);

        System.out.println("LinkedList after insertion using offerFirst()" + jd);
        
    }
}

