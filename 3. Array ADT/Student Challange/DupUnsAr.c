#include<stdio.h>
int main(){
    int A[]={13,4,5,6,6,1,2,13,4,5};
    int n=10;
    int count=1;
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        for(;j<n;j++)
        {
            if(A[j]==A[i])
            {
                j++;
            }
        }
    }
}