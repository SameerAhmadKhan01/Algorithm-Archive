#include<iostream>
using namespace std;

class Node{
public:
    Node *prev;
    int data;
    Node *next;
};

class DoublyLinkedList{
    private:
     Node *head=nullptr;
    public:
     DoublyLinkedList(){cout<<"Default Constructor Called :\n";}
     DoublyLinkedList(int A[],int n);
     ~DoublyLinkedList();
     void Display();
     int countNodes();
     void Insert(int value , int pos);
     void Delete(int pos);
};



DoublyLinkedList::DoublyLinkedList(int A[],int n){
    head = new Node;
    head->data=A[0];
    head->next=head->prev=nullptr;
    Node *t,*last;
    last=head;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->prev=last;
        t->next=nullptr;
        last->next=t;
        last=t;
    }
}




DoublyLinkedList::~DoublyLinkedList() {
    Node *p = head;
    while (head != nullptr) {
        head = head->next; 
        delete p;       
        p = head;        
    }
    cout<<"Destructor Called !";
}



void DoublyLinkedList::Display(){
    Node *p=head;
    while(p!=nullptr){
        cout<<p->data<<" \t ";
        p=p->next;
    }
    cout<<endl;
}


int DoublyLinkedList::countNodes(){
    int count=0;
    Node *p=head;
    while(p!=nullptr){
        count++;
        p=p->next;
    }
    return count;
}


//this function deletes the particular node at a given index!
void DoublyLinkedList::Delete(int pos){
    Node *ptr;
    if (pos == 0) {
      if (head == NULL) return;  
      ptr = head;          
      head = head->next;        
      delete ptr;              
    }
    else{
        for(int i=0;i<pos-1;i++)
          ptr=ptr->next;
        ptr->prev->next=ptr->next;
        if(ptr->next)
          ptr->next->prev=ptr->prev;
        delete ptr;
    }
}






void DoublyLinkedList::Insert(int value,int pos){
    if(pos<0 || pos>countNodes())
      return;
    Node *p=head,*t;
    if(pos==0){
        //if head pointer is not empty!
        if(head!=nullptr){
           t=new Node;
           t->data=value;
           t->prev=nullptr;
           t->next=head;
           head->prev = t;
           head=t;
        }
        //if head is a null pointer
        else{
            head=new Node;
            head->data=value;
            head->prev=head->next=nullptr;
        }
    }
    else{
        t=new Node;
        t->data=value;
       for(int i=0;i<pos-1;i++)
        p=p->next;
       t->next=p->next;
       t->prev=p;
       if(p->next!=nullptr)
         p->next->prev=t;
       p->next=t;
       
    }
}


//main function to sum things up!
int main(){
    
    DoublyLinkedList obj;
    int i=2,pos=0;
    cout<<"Linked List Before Inputting any value : \n"<<endl;
    while(i!=20){
       obj.Insert(i,pos);
       i+=2;
       pos++;
    }
    obj.Display();
    int val,p;
    cout<<"Enter a value to be insereted in the LInked List and its position : \n";
    cin>>val>>p;
    obj.Insert(val,p);
    cout<<"Linked List after inserting a new node is as follows :\n";
    obj.Display();
    cout<<"Linked List After deleting the first element :"<<endl;
    obj.Delete(0);
    obj.Display();
    return 0;
}

