#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=10;
    int *p;
    p=&a;
    printf("%d",p); //prints garbage value 
    printf("%d",*p);//prints the value of the varible to which the pointer is pointing 
    return 0;
}