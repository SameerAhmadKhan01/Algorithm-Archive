#include <iostream>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Queue
{
private:
    int front;
    int rear;
    int size;
    Node **Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new Node *[size];
    }
    Queue(int size)
    {
        this->size = size;
        front = rear = -1;
        Q = new Node *[this->size];
    }
    void Enqueue(Node *);
    Node *Dequeue();
    void Display();
    bool isEmpty();
};

void Queue::Enqueue(Node *x)
{
    if (rear == size - 1)
    {
        cout << "Queue Overflow";
    }
    else
    {
        Q[++rear] = x;
    }
}

Node *Queue::Dequeue()
{
    Node *x = NULL;
    if (front == rear)
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        x=Q[++front];
    }
    return x;
}

void Queue::Display()
{
    int i;
    for (i = front + 1; i <= rear; i++)
    {
        cout << Q[i] << " ";
    }
    cout << endl;
}

bool Queue::isEmpty()
{
    return (front == rear);
}