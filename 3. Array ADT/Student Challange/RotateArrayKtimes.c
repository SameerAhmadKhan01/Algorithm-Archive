#include<stdio.h>
//this is brute force solution whose time complexity is roughly O(n^2) ;

//structure
struct Array
{
   int A[8];
   int size;
};

//rotates one time -> Helper Function
void rotate(struct Array *ar)
{
    int temp=ar->A[ar->size-1];
    for(int i=ar->size-1;i>0;i--)
    {
        ar->A[i]=ar->A[i-1];
    }
    ar->A[0]=temp;
}

//rotate n times!
void RotateKtimes(struct Array *ar,int k)
{
    for(int i=0;i<k;i++)
    {
        rotate(ar);
    }
}

//main function for implementation
int main(){
    struct Array ar={{1,1,2,2,3,4,5,6},8};
    RotateKtimes(&ar,3);
    for(int i=0;i<ar.size;i++){
        printf("%d\t",ar.A[i]);
    }
}