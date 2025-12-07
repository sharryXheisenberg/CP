import java.util.*;


//Using the offerFirst() and offerLas() methods of LinkedList to perform practical operation on priority addition in queues where elements having a greater number than threshold. 



public class SortingDemo{
    public static void main(String[] args) {
        LinkedList<Integer> ll = new LinkedList<Integer>();
        LinkedList prioList = new LinkedList();

        ll.add(12);
        ll.add(4);
        ll.add(8);
        ll.add(10);
        ll.add(3);
        ll.add(15);

        int thres = 10;

        System.out.println("The initial Linked List is" + ll);
        
        // poll() method is used to get  the first element and remove  the element from the list of head  
        // the head of this list, or null if this list is empty
        while(!ll.isEmpty()){
            int t = ll.poll();

            if(t >= 10){
                prioList.offerFirst(t);
            }else{
                prioList.offerLast(t);
            }
        }
        System.out.println("The prioritized linked list is :" + prioList);
    }
}