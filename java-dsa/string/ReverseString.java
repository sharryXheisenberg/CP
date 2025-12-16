import java.util.*;

class Ok{
    String reverseString(String s){
        Stack<Character>st = new Stack<>();

        for(int i=0;i<s.length();i++){
            st.push(s.charAt(i));
        }
        StringBuilder res = new StringBuilder();

        for(int i=0;i<s.length();i++){
            res.append(st.pop());
        }

        return  res.toString();

    }
}
public class ReverseString{
    public static void main(String[] args) {
        Ok obj = new Ok();
        String s = "abdcfe";
        String res = obj.reverseString(s);
        System.out.println("Result of reverse string using stack and stringBuilder: " + res);
    }

}