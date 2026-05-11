
//This is an Array implementation of Queue DS along with the functions enqueue and dequeue

#include<bits/stdc++.h>
using namespace std;

//a structure which consists of all the data requirements of the queue
typedef struct {
    int size;
    int front;
    int rear;
    int *Q;
}Queue;


//checks if queue is empty or not
bool isEmpty(Queue *q){
    return (q->front == q->rear);
}


//checks if queue is full or not
bool isFull(Queue *q){
    return (q->rear==q->size-1);
}


//function to insert a value in the stack
void Enqueue(Queue *q , int val){
   if(isFull(q))
     cout<<"\nQueue is Full"<<endl;
    else {
       q->Q[++q->rear] = val;
    }
}


//function to delete an element from front [FIFo]
int Dequeue(Queue *q){
  int x=-1;
  if(isEmpty(q))
    cout<<"\nQueue is Empty";
  else{
    x = q->Q[++q->front];
  }
  return x;
}


int main(){
    Queue q;
    q.size = 5;
    q.front=q.rear=-1;
    q.Q=(int *)malloc(q.size * sizeof(int));
    Enqueue(&q,5);
    Enqueue(&q,6);
    Enqueue(&q,7);
    Enqueue(&q,8);
    Enqueue(&q,9);
    Enqueue(&q,10); //extra entry to show message Queue is Full
    
    //popping out elements
    while(!isEmpty(&q)){
        cout<<Dequeue(&q)<<"\t";
    }
}



