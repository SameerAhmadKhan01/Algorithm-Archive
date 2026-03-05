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


//main function
int main()
{
    Node *temp;
    int A[]={2,4,6,8,10,12,14,16};
    LL List(A,8);
    List.Display();
    cout<<"Number of Node(s) = "<<List.CountNodes()<<"\n";
    cout<<"Max Element in the List : "<<List.FindMax()<<"\n";
    temp=List.Search(12);
    cout<<"Searched Element is : "<<temp->data<<endl;
}