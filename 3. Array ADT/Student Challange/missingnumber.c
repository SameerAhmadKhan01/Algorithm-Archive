#include<stdio.h>
int main()
{
    int A[]={8,9,10,11,12,13,14,15,16,18,19};
    int len=10;
    int i=0,k=A[0];
    while(A[i]-i==A[0]){
        k++;
        i++;
    }
    printf("Missing Number is : %d",k);

}