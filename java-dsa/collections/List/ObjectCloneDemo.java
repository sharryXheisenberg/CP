class apg implements Cloneable{
    int x,y;

    apg(){
        x = 10;
        y = 20;
    }

    @Override
    public Object clone() throws CloneNotSupportedException {
                // Returning a clone of the current object
        return super.clone();
    }

}

public class ObjectCloneDemo{
    public static void main(String[] args) throws CloneNotSupportedException {
    
            apg o1 = new apg();

            apg o2 = (apg) o1.clone();
            System.out.println("o1: " + o1.x + " " + o1.y);
            System.out.println("o2:" + o2.x + " " + o2.y);

        }
    }
