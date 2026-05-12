#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node *next;
};

class Queue{
    private:
      Node *front;
      Node *rear;
    public:
     Queue();
     ~Queue();
     void Enqueue(int);
     int Dequeue();
     void display();
};

Queue::Queue(){
    front = rear = nullptr;
}

Queue::~Queue() {
    Node* p = front;
    while (front){
        front = front->next;
        delete p;
        p = front;
    }
}


void Queue::Enqueue(int val){
    Node *tmp = new Node;
    if(tmp == nullptr)
      cout<<"Queue OVERFLOW"<<endl;
    else {
        tmp->data = val;
        tmp->next = nullptr;
        if(front == nullptr){
            front = rear = tmp;
        }
        else{
            rear->next = tmp;
            rear = tmp;
        }
    }
}


int Queue::Dequeue(){
   Node *p;
   int x = -1;
   if(front == nullptr)
     cout<<"Queue Underflow"<<endl;
   else{
      p = front;
      front = front->next;
      x = p->data;
      delete p;
   }
   return x;
}

void Queue::display() {
    Node* p = front;
    while (p){
        cout << p->data << flush;
        p = p->next;
        if (p != nullptr){
            cout << " <- " << flush;
        }
    }
    cout << endl;
}
 
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Queue q;
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.Enqueue(A[i]);
    }
 
    q.display();
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.Dequeue();
    }
    q.Dequeue();
 
    return 0;
}