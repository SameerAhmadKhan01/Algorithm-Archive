#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node{
    int data;
    struct Node *next;
}*head=NULL;


//returns 1 if the list is sorted else returns 0 
int isSorted()
{
   int val=INT_MIN;
   struct Node *ptr=head;
   while(ptr!=NULL)
   {
      if(ptr->data<val)
        return 0;
      val=ptr->data;
      ptr=ptr->next;
   }
   return 1;
}