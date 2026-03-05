#include<stdio.h>
#include<stdlib.h>
struct Array {
    int *A;
    int len;
    int size;
};

int main(){
    int *p;
    p=(int*)malloc(10*sizeof(int));
    p[0]=1;
    p[1]=2;
    struct Array ar={p,5,10};
    printf("%d,%d",ar.A[0],ar.A[1]);
}