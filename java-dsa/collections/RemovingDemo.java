import java.util.*;

public class RemovingDemo{
    public static void main(String[] args) {
        Collection<String> op = new ArrayList<>();
        op.add("Saurabh");
        op.add("Anurag");
        op.add("Vaibhav");
        op.add("Top");
        op.add("Dok");

        System.out.println("list of the names in the op list" + op);

        op.remove("Top");
        System.out.println("After removing the op " + op);

        System.out.println("\n");

        Collection<String> toRemove = new ArrayList<>();
        toRemove.add("Dok");
        toRemove.add("Vaibhav");
        toRemove.add("Anurag");

        op.removeAll(toRemove);  // it also accepts collection to remove
        System.out.println("After removeALL()" + op);


    }
}