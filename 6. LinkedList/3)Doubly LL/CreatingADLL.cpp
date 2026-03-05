#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    Node *prev;
    int data;
    Node *next;
};


class DLL{
  private:
   Node *head=NULL;
  public:
   DLL(){}
   DLL(int A[],int  n);
//    ~DLL();
   void Display();
   int Length();
};

DLL::DLL(int A[], int n) { // Added 'n' for array size
    Node *tmp, *last;
    head = new Node;
    head->data = A[0];
    head->prev = head->next = nullptr;
    last = head;

    for(int i = 1; i < n; i++) {
        tmp = new Node;
        tmp->data = A[i];
        
        // Connect the new node
        tmp->next = nullptr; 
        tmp->prev = last;
        
        // Crucial step: Connect the old 'last' forward to the new node
        last->next = tmp; 
        
        // Move the 'last' tracker to the new node
        last = tmp;
    }
}


void DLL::Display(){
    Node *ptr=head;
    while(ptr){
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    cout<<" NULL "<<endl;
}


int DLL::Length(){
    Node *ptr=head;
    int len=0;
    while(ptr!=nullptr){
        len++;
        ptr=ptr->next;
    }
    return len;
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,69};
    DLL List1(a,9);
    List1.Display();
    cout<<"This is the Linked List "<<endl;
    cout<<"Number of Nodes present in the list : "<<List1.Length()<<endl;
    return 0;
}

