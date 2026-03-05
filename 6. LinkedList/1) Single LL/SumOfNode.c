#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

int NumberOfNotes(struct Node *p)
{
    struct Node *ptr=head;
    int c=0;
    while(ptr!=NULL){
        c++;
        ptr=ptr->next;
    }
    return c;
}


int sumOfData(struct Node *p){
    struct Node *temp=p;
    int sum=0;
    while (temp!=NULL)
    {
        sum+=temp->data;
        temp=temp->next;
    }
    return sum;
}
