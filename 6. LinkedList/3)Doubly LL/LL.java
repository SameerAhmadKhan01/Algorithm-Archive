import java.util.*;
class Node {
    protected Node prev;
    protected int data;
    protected Node next;
}


class LL
{
    private Node head;
    public Scanner sc=new Scanner(System.in);
    public LL(int A[])
    {
        Node tmp,last;
        head=new Node();
        head.data=A[0];
        head.next=head.prev=head;
        last=head;
        for(int i=1 ; i < A.length ; i++){
            tmp=new Node();
            tmp.data=A[i];
            tmp.next=head;
            tmp.prev=last;
            last.next=tmp;
            last=tmp;
            head.prev=last;
        }
    }
    public void Display(){
       Node p=head;
       do{
         System.out.print(p.data+"\t");
         p=p.next;
       }while(p!=head);
       System.out.println();
    }

    public static void main(String[] args)
    {
        int[] A={1,2,3,4,5,6,7,8,9,10};
        LL obj = new LL(A);
        obj.Display();
    }
}