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
      void insertSortedManner(int val);
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


void LL::insertSortedManner(int val) {
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




void LL::insertSortedManner(int val) {
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






//main function
int main()
{
    Node *temp;
    int A[]={2,4,69,8,59,12,514,16};
    LL obj;
    for(auto x : A)
      obj.insertSortedManner(x);
    obj.Display();
    cout<<obj.
}