 interface MyIF{
    int getUserID();

    default int getAdminId(){
        return 1;
    }

    static int getUniversalId(){
        return 0;
    }

}


class Op implements  MyIF{
    public int getUserID(){
        return 1;
    }
    public int getAdminId(){
        return 10;
    }
}

public class StaticMethodI{
    public static void main(String[] args) {
         Op obj = new Op();
         System.out.println("Value of the userID "+obj.getUserID());

         int uID = MyIF.getUniversalId();
         System.out.println("Universal ID is" + uID);
    }
}