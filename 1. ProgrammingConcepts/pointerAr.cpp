#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int *p;
    p=(int *)malloc(10*sizeof(int));
    printf("%d",*p);
    for(int i=0;i<10;i++){
        p[i]=pow(i,2);
    }
    for(int i=0;i<10;i++){
        printf("%d\t",p[i]);
    }
}