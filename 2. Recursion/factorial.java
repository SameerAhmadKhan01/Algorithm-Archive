import java.util.*;
public class factorial {
    public static void main(String []args){
            Scanner sc= new Scanner(System.in);
            System.out.println("Enter a number whose factorial you want to know : ");
            int n=sc.nextInt();
            sc.close();
            System.out.printf("Factorial of %d is %d",n,fact(n));
    }
    public static int fact(int n){
        if(n==0){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }
}
