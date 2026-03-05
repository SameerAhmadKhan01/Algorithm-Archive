#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void create(int ar[],int n)
{ 
    
    struct Node *tmp,*last;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=ar[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++)
    {
        tmp=(struct Node*)malloc(sizeof(struct Node));
        tmp->data=ar[i];
        tmp->next=last->next;
        last->next=tmp;
        last=tmp;
    }
}

void display(struct Node *p){
    static int flag=0;
    if(p!=head || flag==0){
        flag=1;
        printf("%d ",p->data);
        display(p->next);
    }
    flag=0;
}

int Length(){
    if (head == NULL) {
        return 0;
    }
    struct Node *ptr=head;
    int count=0;
    do{
      count++;
      ptr=ptr->next;
    }while(ptr!=head);
    return count;
}


void insert(int index,int value){
    if(index<0 || index>Length())
      return;
    struct Node *tmp,*ptr;
    if(index==0){
       tmp=(struct Node *)malloc(sizeof(struct Node));
       tmp->data=value;
       if(head==NULL){
        head=tmp;
        head->next=head;
       }
       else{
        ptr=head;
        while(ptr->next!=head)
          ptr=ptr->next;
        ptr->next=tmp;
        tmp->next=head;
        head=tmp;
       }
    }
    else{
        ptr=head;
        for(int i=0;i<index-1;i++)
          ptr=ptr->next;
        tmp=(struct Node *)malloc(sizeof(struct Node));
        tmp->data=value;
        tmp->next=ptr->next;
        ptr->next=tmp;
    }
}


int main(){
    int ar[]={3,6,9,12,15,18};
    create(ar,6);
    printf("Linked List Before Insertion \n");
    display(head);
    printf("\n");
    insert(0,69);
    printf("Linked List After inserting 69 at 0th index :\n");
    display(head);

}