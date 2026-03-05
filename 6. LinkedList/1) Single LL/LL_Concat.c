// #include<stdio.h>
// #include<stdlib.h>
// struct Node {
//     int data;
//     struct Node *next;
// }*head=NULL;


// //this function inserts value in a sorted order
// void insert(struct Node *h, int x )
// {
//     struct Node *tmp=(struct Node *)malloc(sizeof(struct Node));
//     tmp->data=x;
//     tmp->next=NULL;
//     struct Node *ptr=h;
//     struct Node *q=NULL;
//     if(ptr==NULL)
//     {
//       head=tmp;
//     }
//     while(ptr!=NULL && ptr->data<x){
//         q=ptr;
//         ptr=ptr->next;
//     }
//     if(ptr==head)
//     {
//         tmp->next=head;
//         head=tmp;
//     }
//     else{
//         tmp->next=q->next;
//         q->next=tmp;
//     }
// }

// void Concat(struct Node *h1,struct Node *h2)
// {
//     if (h1 == NULL) return; // Cannot concat to nothing
//     struct Node *ptr1 = h1;
    
//     // Move to the LAST node, not NULL
//     while (ptr1->next != NULL) {
//         ptr1 = ptr1->next;
//     }
//     ptr1->next = h2;
// }


// void display(struct Node *h)
// {
//     struct Node *ptr=h;
//     while(ptr!=NULL)
//     {
//         printf("%d --> ",ptr->data);
//         ptr=ptr->next;
//     }
//     printf("NULL\n");
// }


// int main(){
//     struct Node *List1 = NULL;
//     struct Node *List2 = NULL;

//     // Populating List 1 (Sorted)
//     List1 = insert(List1, 30);
//     List1 = insert(List1, 10);
//     List1 = insert(List1, 20);

//     // Populating List 2 (Sorted)
//     List2 = insert(List2, 50);
//     List2 = insert(List2, 40);

//     printf("List 1: ");
//     display(List1);

//     printf("List 2: ");
//     display(List2);

//     printf("Concatenating List 1 and List 2...\n");
//     Concat(List1, List2);

//     printf("Result: ");
//     display(List1);

//     return 0;
// }





#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* insert(struct Node *h, int x) {
    struct Node *tmp = (struct Node *)malloc(sizeof(struct Node));
    tmp->data = x;
    tmp->next = NULL;

    struct Node *ptr = h;
    struct Node *q = NULL;

    if (h == NULL) {
        return tmp;
    }

    while (ptr != NULL && ptr->data < x) {
        q = ptr;
        ptr = ptr->next;
    }

    if (q == NULL) {
        tmp->next = h;
        return tmp;
    } 
    else {
        tmp->next = q->next;
        q->next = tmp;
        return h;
    }
}

void Concat(struct Node *h1, struct Node *h2) {
    if (h1 == NULL) return; 
    
    struct Node *ptr1 = h1;
    
    while (ptr1->next != NULL) {
        ptr1 = ptr1->next;
    }
    
    ptr1->next = h2;
}

void display(struct Node *h) {
    struct Node *ptr = h;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *List1 = NULL;
    struct Node *List2 = NULL;

    List1 = insert(List1, 30);
    List1 = insert(List1, 10);
    List1 = insert(List1, 20);

    List2 = insert(List2, 50);
    List2 = insert(List2, 40);

    printf("List 1: ");
    display(List1);

    printf("List 2: ");
    display(List2);

    Concat(List1, List2);

    printf("Concatenated: ");
    display(List1);

    return 0;
}