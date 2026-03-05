public class THorner {
    public static double s=1;
    static double e(int x,int n){
          if(n==0)
            return s;
          s=1+(x*s/n);
          return e(x,n-1);
    }
    public static void main(String[] args){
        System.out.println("e^"+10+"="+e(1,10));
    }
}
