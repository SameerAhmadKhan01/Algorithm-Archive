//implementation of the circular queue in JAVA

import java.util.*;
class Queue{
    private int size , front , rear , Q[];

    //default constructor
    public Queue(int size){
        this.size = size;
        front = rear = 0;
        Q = new int[size];
    } 

    //function to add values to the queue
    public void Enqueue(int value){
        if((rear+1)%size == front){
            System.out.println("Queue is FULL");
        }
        else{
            rear = (rear + 1) % size;
            Q[rear] = value;
        }
    }

    //function to delete values from stack
    public int Dequeue(){
        int x = -1;
        if(front == rear)
          System.out.println("Queue is EMPTY");
        else{
            front = (front+1)%size;
            x = Q[front];
        }
        return x;
    }


    //main fn
    public static void main(String[] arhStrings){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the stack : ");
        int size = sc.nextInt();
        sc.close();
        Queue q = new Queue(size);

        q.Enqueue(10);
        q.Enqueue(20);
        q.Enqueue(30);
        q.Enqueue(40);

        System.out.println("Dequeued : "+q.Dequeue());

        q.Enqueue(50);

        System.out.println("Dequeued : "+q.Dequeue());


    }
}