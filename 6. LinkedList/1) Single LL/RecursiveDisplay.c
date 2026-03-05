#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;


//displays the list data recursively
void display(struct Node *p){
    if(p!=NULL){
        printf("%d -> ",p->data);
        display(p->next);
    }
    else{
        printf("NULL\0");
    }
}


//this function returns total number of nodes in the list 
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

//this function will return the total sum of the data members of a node 
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



int main(){
    int A[]={1,2,3,4,5,6};
    head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp,*last;
    head->data=A[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<sizeof(A)/sizeof(A[0]);i++){
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    display(head);
    printf("\nNumber of nodes in this list is : %d",NumberOfNotes(head));
    printf("\nSum of all data members = %d",sumOfData(head));

}