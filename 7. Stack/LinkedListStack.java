import java.util.Scanner;

class Node{
    protected int data;
    protected Node next;
}

class LinkedListStack{
    public static Scanner sc=new Scanner(System.in);
    protected Node top;

    //constructor
    public LinkedListStack(){
        top=null;
    }

    //function to check stack is full or not 
    public boolean isFull() {
    try {
        Node t = new Node();  
        return false;        
    } 
    catch (OutOfMemoryError e) {
        return true;          
    }
}

    //function to check stack is empty or not 
    public boolean isEmpty(){
        return (top==null);
    }



    //function to push values into the stack
    public void push(int val){
        Node temp;
        if(isFull())
            System.out.println("Stack Overflow");        
        else{
            temp=new Node();
            temp.data=val;
            temp.next=top;
            top=temp;
        }
    }

    // Function to pop values from the stack
    public int pop() {
        if (isEmpty()) {
            System.out.println("Stack Underflow");
            return -1;
        } else {
            int poppedValue = top.data;  
            top = top.next;             
            return poppedValue;
        }
    }

    // Function to peek at the top value without removing it
    public int peek() {
        if (isEmpty()) {
            System.out.println("Stack is empty");
            return -1;
        }
        return top.data;
    }

    // Function to display the stack
    public void display() {
        if (isEmpty()) {
            System.out.println("Stack is empty");
        } else {
            Node current = top;
            System.out.print("Stack (top -> bottom): ");
            while (current != null) {
                System.out.print(current.data + " ");
                current = current.next;
            }
            System.out.println();
        }
    }

    // Main method to test the stack
    public static void main(String[] args) {
        LinkedListStack stack = new LinkedListStack();

        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.display();

        System.out.println("Popped: " + stack.pop());
        System.out.println("Popped: " + stack.pop());
        stack.display();

        System.out.println("Peek: " + stack.peek());
        stack.display();
    }
}
