#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;  //data value
    struct Node *next;  //pointer to the next node
}*head=NULL,*last=NULL; //global variables



int countNodes(struct Node *h)
{
    if(h==NULL) return 0;
    else return countNodes(h->next)+1;
}

void insert(int val,int index)
{
    if(index<0 || index>countNodes(head))
       return;
    struct Node *tmp=(struct Node *)malloc(sizeof(struct Node ));  //this is a new node created which will be inserted in the list 
    tmp->data=val ; 
    if(index==0)
    {
        tmp->next=head;
        head=tmp;
        if(last==NULL) last=tmp;
    }
    else{
        struct Node *ptr=head;
        for(int i=0;i<index-1;i++){
             ptr=ptr->next;
        }
        tmp->next=ptr->next;
        ptr->next=tmp;
        if(tmp->next==NULL) last=tmp;
    }
}


void display(struct Node *p) {
    while (p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}


int main() {
    insert(10, 0);
    insert(20, 1); 
    insert(15, 1); 
    insert(5, 0);  

    display(head);
    printf("Last node data: %d\n", last->data);

    return 0;
}




