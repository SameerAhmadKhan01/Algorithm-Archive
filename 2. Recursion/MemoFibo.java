//this is a memoisation approach to return nth term of fibonacci series
//memoisation : the process of storing the known answers in order to avoid futher function calss
public class MemoFibo{
    protected static int[] F;
    public static void main(String []aStrings){
        F=new int[50];
        for(int i=0;i<F.length;i++){
            F[i]=-1;
        }
        System.out.println("50 Terms of Fibonacci series are: ");
        for(int i=0;i<50;i++){
            System.out.print(fibo(i)+"\t");
        }
    }
    static int fibo(int n){
        if(n<=1){
            F[n]=n;
            return F[n];
        }
        else{
            if(F[n-1]==-1){
                F[n-1]=fibo(n-1);
            }
            if(F[n-2]==-1){
                F[n-2]=fibo(n-2);
            }
            F[n]=F[n-1]+F[n-2];
            return F[n-1]+F[n-2];
        }
        
    }
}