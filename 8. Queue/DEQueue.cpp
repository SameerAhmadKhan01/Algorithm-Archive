//this is a implementation of a Double-Ended Queue 

#include<iostream>
using namespace std;

class DEQueue{
    private:
      int front;
      int rear;
      int size;
      int *Q;
    public:
      DEQueue() {}
      DEQueue(int size) : front(-1) , rear(-1) , size(size) {
        this->Q=new int[size];
      }
      ~DEQueue();
      void push_back(int);
      void push_front(int);
      int pop_back();
      int pop_front();
      bool isEmpty() { return front == rear; }
      bool isFull() { return rear == size - 1; }
      void display() {
        if (front == rear) {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Current Queue: ";
        for (int i = front + 1; i <= rear; i++) {
            cout << Q[i] << " ";
        }
        cout << endl;
    }
};


void DEQueue::push_back(int val){
    if(rear == size-1)
      cout<<"Queue is Full";
    else {
        Q[++rear]=val;
    }
}


int DEQueue::pop_front(){
    if(isEmpty())
     cout<<"Queue is Empty";
    else{
        return Q[++front];
    }
    return -1;
}


int DEQueue::pop_back() {
    if (isEmpty()) {
        cout << "Queue Underflow" << endl;
        return -1;
    } else {
        return Q[rear--];
    }
}

void DEQueue::push_front(int val) {
    if (front == -1) {
        cout << "Queue Overflow (Front): No space available at start" << endl;
    } else {
        Q[front--] = val;
    }
}


DEQueue::~DEQueue() {
        delete[] Q;
}


int main() {
    
    DEQueue dq(5);

    cout << "--- Testing Push Operations ---" << endl;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.display();

    cout << "\n--- Testing Pop Operations ---" << endl;
    cout << "Popped from front: " << dq.pop_front() << endl;
    dq.display();

    cout << "Popped from back: " << dq.pop_back() << endl;   

    cout << "\n--- Testing Push Front (Utilizing available space) ---" << endl;
   
    dq.display();

    cout << "\n--- Emptying Queue ---" << endl;
    dq.pop_front();
    dq.pop_front();
    dq.display();

    return 0;
}