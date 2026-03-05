#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*head;

class CLL{
    public:
     CLL(){}
     CLL(int A[],int size);
     ~CLL();
     void Display();
     void RecurDisplay(Node *h);
     int NodeLen();
     void Insert(int val , int pos);
     void Delete(int pos);
};

CLL::CLL(int A[],int n){
    Node *last,*tmp;
    head=new Node;
    head->data=A[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++){
        tmp=new Node;
        tmp->data=A[i];
        tmp->next=last->next;
        last->next=tmp;
        last=tmp;
    }
}

void CLL::Delete(int pos){
    Node *p,*q;
    if(pos==1){
        p=head;
        while(p->next!=head)
          p=p->next;
        if(p==head){
            delete head;
            head=nullptr;
        }
        else{
            p->next=head->next;
            delete head;
            head=p->next;
        }
    }
    else{
        p=head;
        for(int i=0;i<pos-2;i++)
          p=p->next;
        q=p->next;
        p->next=q->next;
        delete q;
    }
}


CLL::~CLL() {
    if (head == nullptr) return;
    Node *p = head;
    Node *next_node;
    do {
        next_node = p->next;
        delete p;
        p = next_node;
    } while (p != head);
    head = nullptr; 
}



void CLL::Insert(int val,int pos){
    Node *tmp,*p;
    if(pos<0 || pos>NodeLen())
      return;
    if(pos==0){
        tmp=new Node;
        tmp->data=val;
        tmp->next=nullptr;
        if(head==nullptr){
            head=tmp;
            head->next=head;
        }
        else{
            p=head;
            while(p->next!=head)
               p=p->next;
            p->next=tmp;
            tmp->next=head;
            head=tmp;
        }
    }
    else{
       p=head;
       for(int i=0;i<pos-1;i++)
        p=p->next;
       tmp=new Node;
       tmp->data=val;
       tmp->next=p->next;
       p->next=tmp;
    }
}


void CLL::Display(){
    Node *ptr=head;
    do{
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }while(ptr!=head);
    cout<<"NULL"<<endl;
}

void CLL::RecurDisplay(Node *h){
    static int flag=0;
    if(flag==0 || h!=head){
        flag=1;
        cout<<h->data<<"->";
        RecurDisplay(h->next);
    }
    cout<<"NULL"<<endl;
    flag=0;
}


int CLL::NodeLen(){
    Node *ptr=head;
    int count=0;
    do
    {
        count++;
        ptr=ptr->next;
    }while(ptr!=head);
    return count;
}


int main() {
    int A[] = {10, 20, 30, 40, 50};
    int n = 5;

    // 1. Initialize the Circular Linked List
    CLL myLL(A, n);
    cout << "Initial List: ";
    myLL.Display();

    // 2. Test Insertion
    cout << "Inserting 5 at position 0 (New Head)..." << endl;
    myLL.Insert(5, 0);
    myLL.Display();

    cout << "Inserting 25 at position 3..." << endl;
    myLL.Insert(25, 3);
    myLL.Display();

    // 3. Test Length
    cout << "Current Length: " << myLL.NodeLen() << endl;

    // 4. Test Deletion
    cout << "Deleting head (position 1)..." << endl;
    myLL.Delete(1);
    myLL.Display();

    cout << "Deleting position 4..." << endl;
    myLL.Delete(4);
    myLL.Display();

    // 5. Final Display
    cout << "Final Circular List: ";
    myLL.Display();

    return 0; // Destructor called automatically here
}