#include<stdio.h>

int duplicate(int A[]);

int main()
{
    int ar[10]={1,2,2,2,3,4,5,6,7,7};
    int lastDigit=0;
    for(int i=0;i<10;i++)
    {
        if(ar[i]==ar[i+1] && ar[i]!=lastDigit)
        {
            lastDigit=ar[i];
            printf("%d\n",ar[i]);
        }
    }
}

