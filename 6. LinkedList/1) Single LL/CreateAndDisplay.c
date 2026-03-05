// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//     int data;
//     struct Node *next;
// }*head=NULL; //head becomes global variable

// void create(int A[], int n)  //A[] is the array , n is the size of the array
// {
//    head=(struct Node *)malloc(sizeof(struct Node));
//    head->data=A[0];
//    head->next=NULL;
//    struct Node *temp,*last;
//    last=head;
//    for(int i=0;i<n;i++)
//    {
//     temp=(struct Node *)malloc(sizeof(struct Node));
//     temp->data=A[i];
//     temp->next=NULL;
//     last->next=temp;
//     last=temp;
//    }
// }


// void display(struct Node *p){
//     while(p!=NULL)
//     {
//         printf("%d\t",p->data);
//         p=p->next;
//     }
// }


// int main(){
//     struct Node *node;
//     int A[]={23,46,69};
//     create(A,3);
//     display(head);
// }


#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *head = NULL;

void create(int A[], int n) {
    if (n <= 0) return;

    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    
    struct Node *temp, *last;
    last = head;

    // Start from 1 because index 0 is already used for 'head'
    for(int i = 1; i < n; i++) {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct Node *p) {
    while(p != NULL) {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    int A[] = {23, 46, 69};
    create(A, 3);
    display(head); // Use the global head variable
    return 0;
}