class Nnumbers{
    @SuppressWarnings("resource")
    public static void main(String [] args){
      java.util.Scanner sc=new java.util.Scanner(System.in);
      System.out.println("Enter range of natural numbers to be summed up : ");
      int n=sc.nextInt();
      System.out.print(sum(n));
    }
    public static int sum(int n){
        if(n==0){
            return 0;
        }
        else
          return n+sum(n-1);
    }
}