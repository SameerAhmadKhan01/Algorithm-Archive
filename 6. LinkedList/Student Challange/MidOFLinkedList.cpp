#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

class LL
{
   private: Node *head;
   public:
    LL(int A[], int n){
        Node *tmp,*last;
        head=new Node;
        head->data=A[0];
        head->next=nullptr;
        last=head;
        for(int i=1;i<n;i++)
        {
            tmp=new Node;
            tmp->data=A[i];
            tmp->next=NULL;
            last->next=tmp;
            last=tmp;
        }
    }
    void Display()
    {
        Node *ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<"\t";
            ptr=ptr->next;
        }
        cout<<"nullptr"<<endl;
    }

    //this will display the Middle ELement of the LL
    void MidElement(){
      Node *fast,*slow;
      fast=slow=head;
      while(fast!= NULL && fast->next!=NULL)
      {
        fast=fast->next->next;
        slow=slow->next;
      }
      cout<<"Mid Element is : "<<slow->data<<endl;
    }
};


int main(){
    int A[]={1,3,5,7,9,11,13,15};
    LL obj(A,8);
    obj.Display();
    obj.MidElement();
    return 0;
}