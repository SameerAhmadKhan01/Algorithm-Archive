
class TaylorSeries{
    protected static double p=1,f=1;
    public static void main(String[] args){
         System.out.println("e^10="+e(1,10));
    }
     static double e(int m,int n){
        double r;
        if(n==0){
            return 1;
        }
        else{
            r=e(m,n-1);
            p=p*m;
            f=f*n;
            return r+(p/f);
        }
    }
}