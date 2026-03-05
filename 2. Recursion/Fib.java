public class Fib {
    public static void main(String []args){
           System.out.println("50 Terms of Fibonacci series : ");
           for(int i=0;i<50;i++){
            System.out.print(fibo(i)+"\t");
           }
    }
    static int fibo(int n){
        if(n<=1)
          return n;
        else
          return fibo(n-1)+fibo(n-2);
    }
}
