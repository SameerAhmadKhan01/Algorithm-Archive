// #include<stdio.h>
// #include<stdlib.h>
// struct Array{
//     int *A;
//     int length;
//     int size;
// };

// void display(struct Array ar){
//     for(int i=0;i<ar.length;i++){
//         printf("%d\t",ar.A[i]);
//     }
//     printf("\n");
// }


// void ReverseLeft(struct Array *ar){
//     int temp=ar->A[0];
//     for(int i=1;i<ar->length;i++){
//         ar->A[i-1]=ar->A[i];
//     }
//     ar->A[ar->length-1]=temp;
// }


// int main(){
//     // struct Array ar({1,2,3,4,5,6,7},7,7);
//     // printf("Original Array : \n");
//     // display(ar);
//     // printf("Left Reversed Array is : \n");
//     // ReverseLeft(ar);
//     // display(ar);
//     int main() {
//     struct Array ar;
//     ar.A = (int*)malloc(7 * sizeof(int));
//     ar.length = 7;
//     ar.size = 7;

//     int values[] = {1,2,3,4,5,6,7};
//     for(int i=0;i<7;i++){
//         ar.A[i] = values[i];
//     }

//     printf("Original Array : \n");
//     display(ar);

//     printf("Left Reversed Array is : \n");
//     ReverseLeft(ar);
//     display(ar);

//     return 0;
// }

// }

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

void ReverseLeft(struct Array *ar){
    int temp = ar->A[0];
    for(int i=1;i<ar->length;i++){
        ar->A[i-1] = ar->A[i];
    }
    ar->A[ar->length-1] = temp;
}

int main(){
    int values[] = {1,2,3,4,5,6,7};

    struct Array ar;
    ar.A = values;
    ar.length = 7;
    ar.size = 7;

    printf("Original Array : \n");
    display(ar);

    printf("Left Reversed Array is : \n");
    ReverseLeft(&ar);
    display(ar);

    return 0;
}
