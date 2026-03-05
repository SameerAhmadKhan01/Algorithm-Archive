#include<iostream>
#include<climits>
using namespace std;

class Node
{
public:
    int data ;
    Node *next;
};

class LL
{
    private:
      Node *head;
    public:
      LL(){head=NULL;}
      LL(int A[],int n);
      ~LL(){ 
        Node *p=head;
        while(head)
        {
        head=head->next;
        delete p;
        p=head;
        }
    }
      void Display();
      Node* Search(int key);
      int FindMax();
      int CountNodes();
      void sortedInsert(int val);
      void deleteNode(int pos);
      bool isSorted();

};

//Linked List creation
LL::LL(int A[], int n)
{
    Node *ptr,*last;
    head=new Node();
    head->data=A[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++)
    {
        ptr=new Node();
        ptr->data=A[i];
        ptr->next=NULL;
        last->next=ptr;
        last=ptr;
    }
}


//Display LL
void LL::Display(){
    Node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" --> ";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}


//returns number of nodes in the LL
int LL::CountNodes(){
    Node *ptr;
    ptr=head;
    int c=0;
    while(ptr!=NULL){
       c++;
       ptr=ptr->next;
    }
    return c;
}

//returns max element in the LL
int LL::FindMax()
{
    int max=INT_MIN;
    Node *ptr=head;
    while(ptr!=NULL){
        max=(max>ptr->data)?max:ptr->data;
        ptr=ptr->next;
    }
    return max;
}


//searchs for the element key in the LL
Node* LL::Search(int key) {
    Node *ptr = head;
    Node *q = NULL;

    while (ptr != NULL) {
        if (key == ptr->data) {
            if (q != NULL) { 
                q->next = ptr->next;
                ptr->next = head;
                head = ptr;
            }
            return head; 
        }
        q = ptr;
        ptr = ptr->next;
    }
    return NULL; 
}


//insert in a sorted position
void LL::sortedInsert(int val)
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







//deleting a node at index-> pos
void LL::deleteNode(int pos)
{
    Node *ptr,*q;
    if(pos==1)
    {
        ptr=head;
        head=head->next;
        delete ptr;
    }
    else{
        ptr=head;
        q=NULL;
        for(int i=0;i<pos-1 && ptr!=NULL ;i++)
        {
            q=ptr;
            ptr=ptr->next;
        }
        if(ptr!=NULL)
        {
            q->next=ptr->next;
            delete ptr;
        }
    }
}


//checks if linked list is sorted or not 
bool LL::isSorted()
{
    if(head==nullptr  || head->next==nullptr)
       return true;
    Node *ptr=head;
    for(int i=0;i<CountNodes()-1;i++)
    {
       if(ptr->data > ptr->next->data)
       {
        return false;
       }
       ptr=ptr->next;
    }  
    return true;
}




//main function
int main()
{
    Node *temp;
    int A[]={2,4,6,8,14,16};
    LL List(A,6);
    List.Display();
    // cout<<"Deleting the Element 12 \n";
    // List.deleteNode(6);
    // List.Display();
    cout<<"Whether the List is sorted or not : "<<boolalpha<<List.isSorted();
    
}