public interface  Series{
    int getNext();
    void reset();
    void setStart(int x);
}

class ByTwos implements Series{
    int start;
    int val =0;
    

     ByTwos() {
        start = 0;
        val =0;
       
    }

    public int getNext(){
      
        val+=2;
        return val;
    }

    public void reset(){
        val = start;
        
    }

    public void setStart(int x){
        start = x;
        val = x;
       
    }
  
}

class ByThrees implements  Series{
     int start;
     int val =0;
    
     ByThrees() {
        start = 0;
        val =0;
       
    }

    public int getNext(){
      
        val+=3;
        return val;
    }

    public void reset(){
        val = start;
        
    }

    public void setStart(int x){
        start = x;
        val = x;
       
    }
}

class SeriesDemo{
    public static void main(String[] args) {
        ByTwos  obj = new ByTwos();
        ByThrees threeOb = new ByThrees();
        Series ob;
        for(int i=0;i<5;i++){
            ob = obj;
            System.out.println("Next value is " + ob.getNext());
        }
            System.out.println("\nResetting");
            obj.reset();
            for(int i=0;i<5;i++){
                ob = threeOb;  // referencing the interface objects 
                System.out.println("Next value is " + ob.getNext());
            }
            obj.setStart(100);
            System.out.println("\nStarting from the 100 value as a starter");
            for(int i=0;i<5;i++){
                System.out.println("Next Value is " + obj.getNext());
            }
    }
}