#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node *next;
};


class Stack{
    protected:
      Node *top;
    public:
     Stack();
     ~Stack();
     void push(int val);
     int pop();
     int peek(int index);
     int stackTop();
     void display();
     bool isFull();
     bool isEmpty();
};


//constructor
Stack::Stack(){
    top=nullptr;
}


//destructor
Stack::~Stack(){
    Node* p = top;
    while (top){
        top = top->next;
        delete p;
        p = top;
    }
}


//to push values in the LL based Stack
void Stack::push(int val){
    if(isFull())
      cout<<"Stack Overflow"<<endl;
    else{
        Node *tmp=new Node;
        tmp->next=top;
        tmp->data=val;
        top=tmp;
    }
}



//to pop out values 
int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        return -999;
    }
    Node *ptr = top;
    int val = ptr->data;
    top = top->next;
    delete ptr;
    return val;
}



//to peeek through the element at the index and return it 
int Stack::peek(int index) {
    if (isEmpty() || index <= 0) return -999;
    
    Node *ptr = top;
    // Move ptr to the desired position
    for (int i = 0; ptr != nullptr && i < index - 1; i++) {
        ptr = ptr->next;
    }

    if (ptr != nullptr) 
        return ptr->data; 
    else 
        return -999;  
}


//returns the top element of the stack
int Stack::stackTop()
{
    if(top!=nullptr)
      return top->data;
    else 
      return -999;
}



//to check if stack is empty or not 
bool Stack::isEmpty(){
    return top==nullptr;
}


//to check if stack is full or not
bool Stack::isFull()
{
    Node *t=new Node; //if a new node is created that means heap is full so it will be null hence stack is full
    if( t==nullptr) return true;
    delete t;
    return false;
}




int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Stack stk;
 
    // Populate stack
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        stk.push(A[i]);
    }
 
    cout << "Stack peek at 3rd: " << stk.peek(3) << endl;
    cout << "Stack peek at 10th: " << stk.peek(10) << endl;
    cout << "Stack top: " << stk.stackTop() << endl;
    cout<<boolalpha << "Stack full: " << stk.isFull() << endl;
    cout<<boolalpha << "Stack empty: " << stk.isEmpty() << endl;
 
    // Pop out elements from stack
    cout << "Popped: " << flush;
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cout << stk.pop() << ", " << flush;
    }
    cout << endl;
 
    // Underflow
    cout << stk.pop() << endl;
 
    return 0;
}


