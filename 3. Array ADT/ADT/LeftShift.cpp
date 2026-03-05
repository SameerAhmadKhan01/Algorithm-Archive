#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Array {
  int *A;
  int length;
  int size;
};

int main(){
    struct Array ar;
    ar.A=(int *)malloc(5*(sizeof(int)));
    ar.length=0;
    ar.size=5;
    for(int i=0;i<ar.size;i++){
        printf("Enter value for A[%d]",i);
        scanf("%d",&ar.A[i]);
    }

 cout<<"Elements Before Shift : ";
    for(int j=0;j<ar.size;j++){
        cout<<ar.A[j]<<"\t";
    }
    printf("\n");

    //shift left
    for(int i=1;i<ar.size;i++){
        int temp=ar.A[0];
        ar.A[i-1]=ar.A[i];
    }
    ar.A[ar.size-1]=0;


    //display
    cout<<"Elements After Shift : ";
    for(int j=0;j<ar.size;j++){
        cout<<ar.A[j]<<"\t";
    }
}