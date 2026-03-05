#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Array{
   int *A;
   int length;
   int size;
};

int LS(struct Array ar,int key){
    for(int i=0;i<ar.length;i++){
        if(key==ar.A[i]){
            return i;
        }
    }
    return -1;
}


void display(struct Array ar){
    printf("Array Elements are :\n");
    for(int i=0;i<ar.length;i++){
        printf("%d\t",ar.A[i]);
    }
    printf("\n");
}

int main(){
    int *p;
    p=(int*)malloc(10*sizeof(int));
    struct Array ar={p,10,10};
    for(int i=0;i<ar.length;i++){
        ar.A[i]=i+1;
    }
    display(ar);
    printf("Enter element to be searched for : ");
    int key;
    scanf("%d",&key);
    int index=LS(ar,key);
    if(index==-1){
        printf("SEARCH UNSUCCESFULL !");
    }
    else
    printf("%d is present at %d",key,index);
}