#include<stdio.h>
#include<stdlib.h>
struct Array {
     int A[10];
     int length;
     int size;
};

void delete(struct Array *ar, int index){
    if(index>=0 && index<=ar->length){
        for(int i=index;i<ar->length;i++){
            ar->A[i]=ar->A[i+1];
        }
        ar->length--;
    }
}

void display(struct Array ar){
    printf("Array Elements are :\n");
    for(int i=0;i<ar.length;i++){
        printf("%d\t",ar.A[i]);
    }
}

int main(){
    struct Array ar={{1,2,3,4,5,69,6},7,10};
    printf("Enter the index whose element has to be deleted:  ");
    int ind;
    scanf("%d",&ind);
    printf("Array Elements Before :\n ");
    display(ar);
    printf("Array Elements After Deletion : \n");
    delete(&ar,ind);
    display(ar);
}