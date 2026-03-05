#include<stdio.h>
#include<stdlib.h>
struct Array{
    int *A; //first array
    int *B; //second array
    int m; //size of first array
    int n; //size of second array
    int *C; //resulting array
};


//merge sort θ(m+n) complexity
void SortedMerge(struct Array *ar){
    int i=0,j=0,k=0;
    while(i<ar->m && j<ar->n){
        if(ar->A[i]<ar->B[j])
           ar->C[k++]=ar->A[i++];
        else 
           ar->C[k++]=ar->B[j++];
    }
    for(;i<ar->m;i++)
       ar->C[k++]=ar->A[i];
    for(;j<ar->n;j++)
       ar->C[k++]=ar->B[j];
}


void input(struct Array *ar){
    printf("Entering value for first Array A[]\n");
    for(int i=0;i<ar->m;i++){
        printf("Enter value for A[%d]: ",i);
        scanf("%d",&ar->A[i]);
    }
    printf("Entering values for the second Array B[]\n");
    for(int k=0;k<ar->n;k++){
        printf("Enter value for B[%d]: ",k);
        scanf("%d",&ar->B[k]);
    }
}

void display(int A[],int len){
    for(int i=0;i<len;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}

int main(){
    struct Array ar;
    int a,b;
    printf("Enter lengths of Array A[]  and Array B[]: ");
    scanf("%d%d",&a,&b);
    ar.m=a;
    ar.n=b;
    ar.A=(int*)malloc(ar.m*sizeof(int));
    ar.B=(int*)malloc(ar.n*sizeof(int));
    ar.C=(int*)malloc((ar.n+ar.m)*sizeof(int));
    input(&ar);
    printf("Contents of First Array : \n");
    display(ar.A,ar.m);
    printf("Contents of Second Array : \n");
    display(ar.B,ar.n);
    SortedMerge(&ar);
    printf("Contents of Merged Array : \n");
    display(ar.C,(ar.m+ar.n));
}