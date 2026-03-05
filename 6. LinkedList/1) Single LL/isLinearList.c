#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head=NULL;

void insert(int val)
{
    struct Node *ptr=head; //explorer
    struct Node *q=NULL;   //trailing
    struct Node *tmp=(struct Node *)malloc(sizeof(struct Node));
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

int isLoop(struct Node *f)
{
    struct Node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=(q->next!=NULL)?q->next:NULL;
    }while(p&&q);
    if(p==q) //LL meets therefore LOOOP exist
      return 1;
    else //Nodes does not met , so no LOOP
      return 0;
}



int main() {
    for (int i = 0; i < 10; i++) {
        insert(i * i);
    }
    struct Node *t1 = head->next->next->next; 
    struct Node *last = head;
    while (last->next != NULL)
        last = last->next;

    last->next = t1; 

    if (isLoop(head))
        printf("Yes, the LL has LOOP\n");
    else
        printf("No, the LL has no LOOP\n");

    return 0;
}