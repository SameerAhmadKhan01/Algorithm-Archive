#include<iostream>
using namespace std;

class Stack{
    public:
      int Size;
      int Top=-1;
      int *s;
    public:
     Stack(){}
     Stack(int size);
     ~Stack();
     bool isFull();
     bool isEmpty();
     void Push(int x);
     int Pop();
     int Peek(int x);
     void Display();
     int StackTop();
};


Stack::Stack(int size){
    this->Size=size;
    s=new int[this->Size];
    for(int i=0;i<Size;i++)
    {
        cout<<"Enter Element "<<(i+1)<<" of Stack"<<endl;
        cin>>s[i];
    }
}



bool Stack::isEmpty(){
    return (Top==-1);
}



bool Stack::isFull(){
    return (Top==(Size-1));
}



void Stack::Push(int x)
{
    if(isFull())
      cout<<"Stack Overflow "<<endl;
    else{
        s[++Top]=x;
    }
}




int Stack::Pop(){
    int x=-1;
    if(isEmpty()){
      cout<<"Stack Underflow"<<endl;
      return -1;
    }
    else{
      x=s[Top--];
    }
    return x;
}





int Stack::Peek(int x){
   int elm=-1;
   if((Top-x+1)<0 || (Top-x+1)==Size)
     cout<<"Invalid Index"<<endl;
    else
      elm=s[Top-x+1];
    return elm;
}




void Stack::Display(){
    cout<<"Elements Present in the Stack :\n";
    for(int i=Top;i>=0;i--)
    {
        cout<<s[i]<<endl;
    }
}





int Stack::StackTop(){
    return s[Top];
}




Stack::~Stack()
{
    delete[] s;
}




int main(){
    int n;
    Stack st;
    cout<<"Enter No Of Elements you want in the stack"<<endl;
    cin>>st.Size;
    st.s=new int[st.Size];
    st.Push(9);
    st.Push(7);
    st.Push(5);
    st.Push(3);
    st.Push(1);
    st.Display();
    cout<<"Top Element is : "<<st.StackTop()<<endl;
    cout<<"Element at 3rd Position is : "<<st.Peek(3)<<endl;
    cout<<"Popped Elements Are : "<<endl;
    while(!st.isEmpty())
       cout<<st.Pop()<<"\t";
    return 0;
}

