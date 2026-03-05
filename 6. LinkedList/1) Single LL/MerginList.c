#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *data;
}*head=NULL,*third=NULL;

void merge(struct Node *list1, struct Node *list2)
{
    if(list1->data<list2->data)
    {
       third=head->data;
       head=head->data;
       last->next=NULL;
    }
}