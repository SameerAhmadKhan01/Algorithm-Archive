#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    Node *prev;
    int data;
    Node *next;
};

class DLL
{
private:
  Node *head;
public:
  DLL(){}
  DLL(int A[],int n);
  void Display();
  void Insert(int val , int pos);
  void Delete(int pos);
};


//creation of a Circular Doubly Linked List
DLL::DLL(int A[],int n)
{
   if(n<=0){
    head=nullptr;
    return;
   }
   Node *tmp,*last;
   head=new Node;
   head->data=A[0];
   head->prev=head->next=head;
   last=head;
   for(int i=1;i<n;i++)
   {
    tmp=new Node;
    tmp->data=A[i];
    tmp->next=head;
    tmp->prev=last;
    last->next=tmp;
    head->prev=tmp;
    last=tmp;
   }
}


void DLL::Display()
{
    Node *p=head;
    do{
        cout<<p->data<<"\t";
        p=p->next;
    }while(p!=head);
    cout<<"Null"<<endl;
}


//inserting an element 
void DLL::Insert(int val , int pos)
{
    Node *tmp,*ptr=head;
    if(head==nullptr)
    {
       if(pos==1)
       {
          tmp=new Node;
          tmp->data=val;
          tmp->next=tmp->prev=tmp;
          head=tmp;
       }
       else 
         return;
      return;
    }
    

    if(pos==1)
    {
        Node *last=head->prev;
        tmp=new Node;
        tmp->data=val;
        tmp->next=head;
        tmp->prev=last;
        last->next=head->prev=tmp;
        head=tmp;
        return;
    }

    //inserting at any position
    for(int i=1;i<pos-1;i++){
       ptr=ptr->next;
       if(ptr==head)
       {
        cout<<"Invalid Index" <<endl;
        return;
       }
    }
    tmp=new Node;
    tmp->data=val;

    tmp->next=ptr->next;
    tmp->prev=ptr;
    ptr->next->prev=tmp;
    ptr->next=tmp;
}


//this function deletes a node from a circular DLL
void DLL::Delete(int pos)
{
    if(head==NULL) return;
    Node *ptr=head;
    for(int i=0;i<pos;i++)
      ptr=ptr->next;
    

    if(ptr==nullptr) return;

    if(head==ptr) head=ptr->next;

    if(ptr->prev != NULL)
     ptr->prev->next=ptr->next;
    if(ptr->next!=NULL)
     ptr->next->prev=ptr->prev;
    int x=ptr->data;
    delete ptr;
}





int main(){
    int *ar=new int[10];
    for(int i=0;i<10;i++)
       ar[i]=(int)(pow(i,4));
    DLL obj(ar,10);
    obj.Display();
    cout<<"Enter a element and its position to entered in a LL : "<<endl;
    int nm,ps;
    cin>>nm>>ps;
    obj.Insert(nm,ps);
    obj.Display();
    obj.Delete(2);
    obj.Display();
    return 0;
}



