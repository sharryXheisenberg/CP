import java.util.List;

import java.util.ArrayList;

class ToArrayDemo{
    public static void main(String[] args) {
        List<Integer>al = new ArrayList<>();
        al.add(10);
        al.add(20);
        al.add(30);
        al.add(40);
        al.add(50);

        // by using Object class method toArray();

        Object[] objects = al.toArray();
        System.out.println("Converting a list to array by using Object class method toArray()");
        for(Object obj:objects){  // here we need to take variable or object of 'Object' class only to iterate because by default 'objects' array is type of Object(Object[])

            System.out.print(obj + " ");
        }



        //Method 2: Using T[] toArray(T[] a) 
        // Converts a list into an array arr[] and returns same. 
        // If arr[] is not big enough, then a new array of same
        // type is allocated for this purpose.
        // T represents generic.
        // public  T[] toArray(T[] arr)
        

        // If the passed array has enough space, then elements are stored in this array itself.
        // If the passed array doesn't have enough space, a new array is created with same type and size of given list.
        // If the passed array has more space, the array is first filled with list elements, then null values are filled.

        Integer[] arr = new Integer[al.size()];
        arr = al.toArray(arr);
        for(Integer x:arr){
            System.out.print( x + " ");
        }

        //: Manual method to convert ArrayList using get() method

        Integer[] aa = new Integer[al.size()];
        for(int i=0;i<al.size();i++) aa[i] = al.get(i);

        System.out.println("Iterating the list by using the get(int index) method");
        for(Integer x:aa){
            System.out.print(x+" ");
        }


        // 4. Using streams API of collections in java 8 to convert to array of primitive int type

        // ArrayList to array conversion

        int[] aro = al.stream().mapToInt(i->i).toArray();
        System.out.println("Converting the list toArray by using streams api and converting list to primitive data type");
        for(int x:aro){
            System.out.print(x+" ");
        }



    }
}