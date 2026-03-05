#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head;

void create(int ar[],int n)
{ 
    
    struct Node *tmp,*last;
    head=(struct Node *)malloc(sizeof(struct Node));
    head->data=ar[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++)
    {
        tmp=(struct Node*)malloc(sizeof(struct Node));
        tmp->data=ar[i];
        tmp->next=last->next;
        last->next=tmp;
        last=tmp;
    }
}

void display(struct Node *p){
    static int flag=0;
    if(p!=head || flag==0){
        flag=1;
        printf("%d ",p->data);
        display(p->next);
    }
    flag=0;
}


void insert(struct Node *h,int value,int pos){
    struct Node *tmp,*ptr;
    for(int i=0;i<pos-1;i++)
    {
        ptr=ptr->next;
    }
    tmp=(struct Node *)malloc(sizeof(struct Node *));
    tmp->data=value;
    tmp->next=ptr->next;
    ptr->next=tmp;
}


int main(){
    int A[]={2,4,6,8,10};
    create(A,5);
    display(head);
}



// #include<stdio.h>
// #include<stdlib.h>

// struct Node {
//     int data;
//     struct Node *next;
// } *head = NULL;

// // Added 'n' to handle array size correctly
// void create(int ar[], int n) { 
//     struct Node *tmp, *last;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     head->data = ar[0];
//     head->next = head;
//     last = head;

//     for(int i = 1; i < n; i++) {
//         tmp = (struct Node*)malloc(sizeof(struct Node));
//         tmp->data = ar[i];
//         tmp->next = last->next;
//         last->next = tmp;
//         last = tmp;
//     }
// }

// // Using a loop is much safer for circular lists
// void display(struct Node *p) {
//     if (p == NULL) return;
//     struct Node *temp = p;
//     do {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     } while (temp != p);
//     printf("\n");
// }

// void insert(struct Node *h, int value, int pos) {
//     struct Node *tmp, *ptr = h;
//     // Basic position logic (assumes pos > 0)
//     for(int i = 0; i < pos - 1; i++) {
//         ptr = ptr->next;
//     }
//     tmp = (struct Node *)malloc(sizeof(struct Node)); // Fixed sizeof
//     tmp->data = value;
//     tmp->next = ptr->next;
//     ptr->next = tmp;
// }

// int main() {
//     int A[] = {2, 4, 6, 8, 10};
//     int n = sizeof(A) / sizeof(A[0]); // Calculate size here
//     create(A, n);
//     display(head);
    
//     return 0;
// }