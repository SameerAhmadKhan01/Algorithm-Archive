#include<stdio.h>
#include<stdlib.h>
struct NewPtr
{
    int *p;
};

int main(){
    struct NewPtr ar;
    ar.p=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        printf("Enter a value for ar[%d] : ",i);
        scanf("%d",&ar.p[i]);
    }
    printf("Elements of array are : ");
    for(int i=0;i<5;i++){
        printf("%d\t",ar.p[i]);
    }
}
