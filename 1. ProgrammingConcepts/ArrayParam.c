#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//returns array/pointer of size n
long * createAr(int n)
{
   long long *p;
   p=(long long *)malloc(n*sizeof(int));
   return (p);
}

//main fn to create an array
int main(){
    long n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    long long *A=createAr(n);
    // printf("%d",A);
    for(int i=0;i<n;i++){
        A[i]=pow(i+1,i+1);
        printf("%d\t",A[i]);
    }
}