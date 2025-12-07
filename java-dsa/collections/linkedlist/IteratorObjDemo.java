import java.util.Iterator;
import java.util.LinkedList;

class Human{
    int a;
    String n;

    public Human(int a , String n){
        this.a = a;
        this.n = n;
    }

    @Override public String toString(){
        return "age=" + a + ", name=" + n;
    }

}

public class IteratorObjDemo{
    public static void main(String[] args) {
        LinkedList<Human> l = new LinkedList<>();

        l.add(new Human(10, "Bob"));
        l.add(new Human(20,"Alice"));
        l.add(new Human(23,"Robin"));
        l.add(new Human(38,"Scott"));
        l.add(new Human(34,"David"));

        Iterator<Human> it = l.descendingIterator();
        System.out.println("Iterating in reverse Order: ");

        while(it.hasNext()){
            System.out.println(it.next());
        }
    }

}