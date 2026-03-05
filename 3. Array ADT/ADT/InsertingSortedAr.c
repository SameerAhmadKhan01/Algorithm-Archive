#include<stdio.h>
#include<stdlib.h>
struct Array {
  int *A;
  int length;
  int size;
};

void display(struct Array ar){
    for(int i=0;i<ar.length;i++){
        printf("%d\t",ar.A[i]);
    }
    printf("\n");
}

int main(){
    struct Array ar;
    int lis[20] = {2,4,8,10,12,14,16};

    ar.A = (int*)malloc(20 * sizeof(int));   // allocate full size
    for(int j=0; j<7; j++){
    ar.A[j] = lis[j];
    }
    ar.length=7;
    ar.size=20;
    printf("Original Array : \n");
    display(ar);
    int x; //this will be inserted 
    printf("Enter a value to be inserted : ");
    scanf("%d",&x);
    printf("Array after insertion : \n");
    int i=ar.length-1;
    while(x<ar.A[i]){
        ar.A[i+1]=ar.A[i];
        i--;
    }
    ar.A[i+1]=x;
    ar.length++;
    display(ar);
    return 0;
}