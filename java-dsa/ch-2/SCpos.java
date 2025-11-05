//solely this program is written to understand the difference between 
// short-circuit && and normal AND operator 


public class SCpos{
    public static void main(String[] args){
        int d,n;

        n = 10;
        d =2;

        if(d!=0 && (n&d)==0){
            System.out.println(d+ " is a factor of "+ n);
        }
        d = 0;
        if(d!=0 && (n%d)==0){  // here modulous operation are not gonna happen as we are using the short-circuit AND operator
            System.out.println(d+" is a factor of "+n);
        }

        if(d!=0 & (n%d)==0){  // here second modulous operation is occurse because normal and operator
            System.out.println(d+" is a factor of "+ n);
        }
    }
}