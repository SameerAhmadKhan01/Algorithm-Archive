#include<stdio.h>
#include<stdlib.h>
struct Array{
    int *A;
    int size;
    int length;
};

void input(struct Array *ar,int len){
    for(int i=0;i<len;i++){
       ar->length++;
       printf("Enter a value for A[%d] : ",i);
       scanf("%d",&ar->A[i]);
    }
    printf("\n");
}

void display(struct Array ar){
    for(int i=0;i<ar.length;i++){
        printf("%d\t",ar.A[i]);
    }
    printf("\n");
}

void swap(int *a, int *b){
    *a=(*a)^(*b);
    *b=(*a)^(*b);
    *a=(*a)^(*b);

}

void AllNegAtLeft(struct Array *ar){
    int i=0;
    int j=ar->length-1; // i is for positive elements , j is for negative elements O(n^2)
    while(i<j){
        while(ar->A[i]<0){i++;}
        while(ar->A[j]>0){ j--;}
        if(i<j){
            swap(&ar->A[i],&ar->A[j]);
        }
    }
    
}

int main(){
    int len;
    printf("Enter the number of elements you want to enter : ");
    scanf("%d",&len);
    struct Array ar;
    ar.A=(int*)malloc(len*sizeof(int));
    input(&ar,len);
    printf("Original Array : ");
    display(ar);
    AllNegAtLeft(&ar);
    printf("After Shifting All Negative Elements to Left : ");
    display(ar);

}