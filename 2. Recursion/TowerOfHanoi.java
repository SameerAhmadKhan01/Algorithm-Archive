public class TowerOfHanoi {
    static void TOH(int n,int a, int b, int c){
        if(n>0){
            TOH(n-1,a,c,b);
            System.out.println("from "+a+"to"+b);
            TOH(n-1,b,a,c);
        }
    }
    public static void main(String[] args){
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.println("Enter number of dics of Tower Of Hanoi : ");
        int n=sc.nextInt();
        System.out.println("Steps to solve "+n+" discs Tower of Hanoi are : ");
        System.out.println("Steps are : ");
        TOH(n,1,2,3);
    }
    //time complexity O(n^2)
}
