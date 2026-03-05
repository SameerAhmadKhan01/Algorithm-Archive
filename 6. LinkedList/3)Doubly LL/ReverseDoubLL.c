#include<stdio.h>
#include<stdlib.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
}*head;

void create(int A[],int n){
    if(n<=0) return;
    struct Node *t,*last;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=A[0];
    head->next=head->prev=NULL;
    last=head;
    for(int i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        t->prev=last;
        last->next=t;
        last=t;
    }
}


void display(){
    struct Node *p=head;
    while(p!=NULL){
        printf("%d -> ",p->data);
        p=p->next;
    }
    printf("NULL\n");
}


void reverse(struct Node *p) {
    struct Node *temp = NULL;
    if (p == NULL) return;

    while (p != NULL) {
        temp = p->prev;
        p->prev = p->next;
        p->next = temp;
        head = p;
        p = p->prev;
    }
}



int main(){
    int A[]={1,2,3,4,5,6,7,8,9};
    create(A,9);
    display();
    reverse(head);
    display();
    return 0;
}
