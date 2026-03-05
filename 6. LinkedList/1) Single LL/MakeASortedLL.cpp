#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

class LinkedList
{
   private:
    Node *head=NULL;
   public:
     LinkedList(){head=NULL;}
     void insert(int val);
     void display();
     ~LinkedList();
};

void LinkedList::insert(int val)
{
    Node *ptr=head; //explorer
    Node *q=NULL;   //trailing
    Node *tmp=new Node;
    tmp->data=val;
    tmp->next=NULL;
    if(head==NULL)
    {
        head=tmp;
        return;
    }
    while(ptr!=NULL && ptr->data<val){
        q=ptr;
        ptr=ptr->next;
    }
    if(ptr==head)
    {
        tmp->next=ptr;
        head=tmp;
    }
    else{
        tmp->next=q->next;
        q->next=tmp;
    }
}

void LinkedList::display()
{
    Node *ptr=head;
    while(ptr){
        cout<<ptr->data<<" --> ";
        ptr=ptr->next;
    }
    cout<<"NULL\n";
}

LinkedList::~LinkedList(){
 Node *p=head;
 while(head)
 {
   head=head->next;
   delete p;
   p=head;
 }
}

int main(){
    LinkedList LL;
    cout<<"Enter number of elements you want in LINKED LIST : \n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter a value : ";
        int val;
        cin>>val;
        LL.insert(val);
    }
    LL.display();
    return 0;
}