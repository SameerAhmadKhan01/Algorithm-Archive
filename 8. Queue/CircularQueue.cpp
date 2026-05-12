#include<bits/stdc++.h>
using namespace std;

class Queue {
    private:
     int size;
     int front;
     int rear;
     int *Q;
    public:
     Queue() {}
     Queue(int size) : size(size) , front(0) , rear(0) {
        Q = new int[size];
     }
     void Enqueue(int);
     int  Dequeue();
};

void Queue::Enqueue(int x){
   if(((rear+1)%size) == front)
     cout<<"Queue is FULL"<<endl;
   else{
      rear = (rear+1)%size;
      Q[rear] = x;
   }
}

int Queue::Dequeue(){
    int x=-1;
    if(front == rear)
      cout<<"Queue is EMPTY"<<endl;
    else{
        front = (front+1)%size;
        x = Q[front];
    }
    return x;
}

int main() {
    Queue q(5); 
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);

    cout << "Dequeued: " << q.Dequeue() << endl;

    q.Enqueue(50);

    cout << "Dequeued: " << q.Dequeue() << endl;

    return 0;
}

