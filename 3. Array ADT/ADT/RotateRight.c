#include<stdio.h>
#include<stdlib.h>

struct Array{
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

void insert(int val, int index, struct Array *ar){
    for(int i = ar->length; i > index; i--){
       ar->A[i] = ar->A[i-1];
    }
    ar->A[index] = val;
    ar->length++;
}

void delete(int index, struct Array *ar){
    if(index >= 0 && index < ar->length){
        for(int i = index; i < ar->length - 1; i++){
            ar->A[i] = ar->A[i+1];
        }
        ar->length--;
    }
}

void ShiftRight(struct Array *ar){
    int tmp = ar->A[ar->length - 1];
    for(int i = ar->length - 1; i > 0; i--){
        ar->A[i] = ar->A[i - 1];
    }
    ar->A[0] = tmp;
}

int main(){
    int list[] = {1,2,3,4,5,6};

    struct Array ar;
    ar.A = list;
    ar.length = 6;
    ar.size = 6;

    printf("Original Array : \n");
    display(ar);

    printf("Array after Right Rotation\n");
    ShiftRight(&ar);
    display(ar);

    return 0;
}
