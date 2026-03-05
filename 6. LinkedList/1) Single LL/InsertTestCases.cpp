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
      void insert(int val,int index);
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


//searchs for the element key in the LL - this is an  improved Ls, by moving the searched element in front to reduce complexity of searched once again 
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



// Node* LL::Search(int key) {
//     Node *ptr = head;
//     while (ptr != NULL) {
//         if (key == ptr->data) {
//             return ptr; // Just return the pointer, don't move anything
//         }
//         ptr = ptr->next;
//     }
//     return NULL; 
// }


//insert at given index
void LL::insert(int val, int index)
{
    // 1. Boundary Check
    if (index < 0 || index > CountNodes())
        return;

    // 2. Create the new node
    Node *t = new Node();
    t->data = val;

    // 3. Case: Insert at Head (Index 0)
    if (index == 0)
    {
        t->next = head;
        head = t;
    }
    // 4. Case: Insert anywhere else
    else 
    {
        Node *p = head;
        // Move p to the node BEFORE the insertion point
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        
        // Connect new node to the rest of the list
        t->next = p->next;
        // Connect previous node to new node
        p->next = t;
    }
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
    cout<<"List after inserting 18:\n";
    List.insert(18,8);
    List.Display();
}