//m^n using recursion
class power
{
    public static void main(String[] args){
            System.out.println(pow(2,4));
    }
    public static int pow(int m, int n){
        if(n==0){
            return 1;
        }
        if(n%2==0){
            return pow(m*m,n/2);
        }
        return pow(m*m,(n-1)/2)*m;
    }
}