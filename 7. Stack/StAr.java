import java.util.*;
class StAr
{
    protected int stack[];
    protected int top=-1;
    protected int size;
    public static Scanner sc=new Scanner(System.in);

    //parametarised constructor
    public StAr(int size)
    {
        this.size=size;
        this.top=-1;
        stack=new int[this.size];
        for(int i=0;i<stack.length;i++)
        {
            System.out.println("Enter value for "+(i+1)+" element of the stack : ");
            stack[i]=sc.nextInt();
        }
    }

    //non-parametarised constructor
    public StAr(){}

    //checks if stack is full or not
    public boolean isFull(){
        return (top==(size-1));
    }

    //checks if stack is empty or not
    public boolean isEmpty(){
        return top==-1;
    }


    //to insert an element to the stack
    public void Push(int x){
        if(isFull())
            System.out.println("Stack Overflow");
        else{
            stack[++top]=x;
        }
    }


    //to remove the element from the top
    public int Pop(){
        if(isEmpty())
          System.out.println("Stack Underflow");
        else{
            int x=stack[top--];
            return x;
        }
        return -1;
    }


    //to peek and retrn the element from top
    public int Peek(int pos)
    {
        int index = top - pos + 1;
        
        if (index < 0 || index > top) {
            System.out.println("Invalid Position");
            return -1;
        } else {
            return stack[index];
        }
    }

    
    //fucnction to display contents of a Stack
    public void Display()
    {
        if(isEmpty()){
          System.out.println("Stack is Empty");
          return;
        }
       for(int i=0;i<top;i++)
         System.out.println(stack[i]+"\t");
        System.out.println();
    }


    //main function to sum things up!
    public static void main(String[] args) {
        StAr obj= new StAr();
        System.out.println("Enter Number of Elements you want in the Stack");
        obj.size=sc.nextInt();
        obj.stack=new int[obj.size];
        obj.top=-1;
        obj.Push(7);
        obj.Push(4);
        obj.Push(3);
        obj.Push(2);
        obj.Push(1);
        obj.Push(9);
        obj.Push(0);
        System.out.println("Elements of Stack are : ");
        obj.Display();
        System.out.println("Element at 4th Position : "+obj.Peek(4));
        System.out.println("Poppnig The Elements : ");
        while(!obj.isEmpty())
            System.out.println(obj.Pop());
    }
}