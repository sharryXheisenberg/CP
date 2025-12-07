import java.util.*;

class Kl{
    public static void main(String[] args) {
        LinkedList<String> ll = new LinkedList<>();

        ll.add("Ok");
        ll.add("Nah");
        ll.add("Bro");

        System.out.println("Initial LinkedList" + ll);
        System.out.println("\n");

        ll.remove(1);  // remove the element at first index
        System.out.println("After removal index ll is: " + ll);

        ll.remove("Bro");
        for(String str:ll){
          System.out.print(str + " ");
        }
        System.out.println("After the object removal: " + ll);

        ll.addFirst("Prime");
        ll.addFirst("Megatron");
        System.out.println("\n");
        System.out.println("After adding the new elements by using addFirst() method" + ll);
    }
    
}