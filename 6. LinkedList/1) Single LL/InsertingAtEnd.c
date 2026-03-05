#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head=NULL,*last=NULL;



void display() {
    struct Node *p=head;
    while (p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

void insertAtEnd(int val)
{
    struct Node *tmp=(struct Node *)malloc(sizeof(struct Node));
    tmp->data=val;
    tmp->next=NULL;
    if(head==NULL)
      head=last=tmp;
    else{
        last->next=tmp;
        last=tmp;
    }
}

int main()
{
    insertAtEnd(4);
    insertAtEnd(5);
    display();
}