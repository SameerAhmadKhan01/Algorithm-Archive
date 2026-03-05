import java.util.*;
public class NCR{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter value for N");
        int n=sc.nextInt();
        System.out.println("Enter value for R : ");
        int r=sc.nextInt();
        sc.close();
        System.out.println("The value for C("+n+","+r+") is : "+C(n,r));
    }
    static int C(int n, int r){
        if(r==0 || n==r){
            return 1;
        }
        else{
            return C(n-1,r-1)+C(n-1,r);
        }
    }
}