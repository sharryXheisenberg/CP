import java.util.ArrayList;


public class AddAlldemo{
    public static void main(String[] args) {
       ArrayList<String> l1 = new ArrayList<>();
        l1.add("C++");
        l1.add("Java"); 
        l1.add("TypeScript");

        ArrayList<String>l2 = new ArrayList<>();
        l2.add("Go");

        l1.addAll(l2);
        System.out.println("l1 list after adding the l2 list" + l1);


        //. boolean addAll(int index, Collection c)


        ArrayList<String>w1 = new ArrayList<>();
        w1.add("Ok");
        w1.add("bro");
        w1.add("what");
        w1.add("the hell");


        ArrayList<String> w2 = new ArrayList<>();
        w2.add("Nah");
        w2.add("bro , we are not good!");

        w2.addAll(2,w2);
        System.out.println(""+w1);

    }
    
}
