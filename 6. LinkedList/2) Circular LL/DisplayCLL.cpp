#include<bits/stdc++.h>
using namespace std;

class Node{
public:
  int value;
  Node *next;
};

class CircularLL
{
private: 
    Node *head;
public:
  CircularLL(){}
  CircularLL(vector<int> arr);
  void Display();
  ~CircularLL();
};


//creation of a Circular LL
CircularLL::CircularLL(vector<int> arr){
   Node *tmp,*last;
   head=new Node;
   head->value=arr[0];
   head->next=head;
   last=head;
   for(int i=1;i<arr.size();i++)
   {
     tmp=new Node;
     tmp->value=arr[i];
     tmp->next=last->next;
     last->next=tmp;
     last=tmp;
   }
}

void CircularLL::Display()
{
  Node *ptr=head;
  do{
    cout<<ptr->value<<"->";
    ptr=ptr->next;
  }while(ptr!=head);
  cout<<"head"<<endl;
}

CircularLL::~CircularLL() {
    if (!head) return;
    Node *current = head;
    Node *nextNode;
    do {
        nextNode = current->next;
        delete current;
        current = nextNode;
    } while(current != head);
    head = nullptr;
}



int main()
{
   vector<int> arr={1,2,3,4,5,6,7,7,8};
   CircularLL c(arr);
   c.Display();
}