class ErrorMsg{
    final int OUTER = 0;
    final int INNER = 1;
    final int DISKEER = 2;
    final int INDEXERR = 3;

    String msgs[] = {
        "Output Error",
        "Input Error",
        "Disk Full ",
        "Index Out-of-Bounds"
    };

    String getErrorMsg(int i){
        if(i>=0 && i<msgs.length)
            return msgs[i];
        else 
            return "Invalid Error code";
    }
}

class FinalD{
    public static void main(String[] args) {
        ErrorMsg err = new ErrorMsg();

        System.out.println(err.getErrorMsg(err.DISKEER));
        System.out.println(err.getErrorMsg(err.INDEXERR));
        System.out.println(err.getErrorMsg(4));
    }
}