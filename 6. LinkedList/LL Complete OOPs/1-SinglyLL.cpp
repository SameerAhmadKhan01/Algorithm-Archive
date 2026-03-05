//this is a complete LL class , it consists of all the functions of A LL


#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node *next;
};

class LL
{
    private:
     Node *head;
    public:
     LL(){head=NULL;}  // Non-Parametarised Constructor 
     LL(int A[],int len);  //Parametarised Constructor 
     ~LL();
     void Display();
     void Insert(int val,int index);
     void sortedInsert(int val);
     int Delete(int index);
     int Length();

};

LL::LL(int A[],int len)
{
    Node *last,*tmp;
    head=new Node;
    head->data=A[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<len;i++)
    {
        tmp=new Node;
        tmp->data=A[i];
        tmp->next=NULL;
        last->next=tmp;
        last=tmp;
    }
}


LL::~LL()
{
    Node *p=head;
    while(head!=NULL)
    {
        head=head->next;
        delete p;
        p=head;
    }
}


void LL::Display()
{
    Node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" --> ";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}


int LL::Length()
{
    int count=0;
    Node *ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}



void LL::sortedInsert(int val) {
    Node *ptr = head;
    Node *q = NULL; 
    
    Node *tmp = new Node();
    tmp->data = val;
    tmp->next = NULL;

    // 1. If the list is empty
    if (head == NULL) {
        head = tmp;
        return;
    }

    // 2. Traverse to find the insertion point
    while (ptr != NULL && ptr->data < val) {
        q = ptr;
        ptr = ptr->next;
    }

    // 3. Insert at the very beginning (Head)
    if (ptr == head) {
        tmp->next = head;
        head = tmp;
    } 
    // 4. Insert in the middle or at the end
    else {
        tmp->next = q->next;
        q->next = tmp; // Fixed: update the previous node's next pointer
    }
}






int LL::Delete(int index)
{
    Node *p, *q = NULL;
    int x = -1;

    // 1. Fixed boundary check: index must be between 1 and Length
    if(index < 1 || index > Length())
        return -1; 

    if(index == 1)
    {
        p = head;
        head = head->next;
        x = p->data;
        delete p;
    }
    else {
        p = head;
        // 2. Fixed loop: move p to the target node, q stays behind it
        for(int i = 0; i < index - 1; i++){
            q = p;
            p = p->next;
        }
        if (p) { // Safety check
            q->next = p->next;
            x = p->data;
            delete p;
        }
    }
    return x; // 3. Must return the value
}



//insertion in a sorted list 
void LL::Insert(int val, int index){
    if(index<0 || index>Length())
       return;
    Node *tmp,*ptr=head;
    tmp=new Node;
    tmp->data=val;
    tmp->next=NULL;
    if(index==1)
    {
        tmp->next=head;
        head=tmp;
    }
    else{
        for(int i=0;i<index-1;i++)
          ptr=ptr->next;
        tmp->next=ptr->next;
        ptr->next=tmp;
    }   
}




//main function to wrap things up
int main()
{
  int A[]={9,7,1,2,5,3,4,6,8};
  LL obj;
  for(auto &x:A)
    obj.sortedInsert(x);
  obj.Display();
  obj.Delete(5);
  cout<<"LL after deleting the 5th node :"<<endl;
  obj.Display();
  obj.sortedInsert(69);
  cout<<"LL after inserting 69:"<<endl;
  obj.Display();
  return 0;
}