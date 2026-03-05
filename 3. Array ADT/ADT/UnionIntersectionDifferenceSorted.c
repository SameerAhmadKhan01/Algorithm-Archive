//this only works when both the Arrays are sorted!
#include<stdio.h>
#include<stdlib.h>
struct Array{
    int A[10];
    int length;
    int size;
};


//union means copy all the elements but without repetition between the 2 arrays 
struct Array * Union(struct Array *ar1,struct Array *ar2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));
    while(i<ar1->length && j<ar2->length)
    {
        if(ar1->A[i]<ar2->A[j])
           arr3->A[k++]=ar1->A[i++];
        else if(ar1->A[i]>ar2->A[j])
           arr3->A[k++]=ar2->A[j];
        else{
            arr3->A[k++]=ar1->A[i++];
            j++;
        }
    }
    for(;i<ar1->length;i++)
      arr3->A[k++]=ar1->A[i];
    for(;j<ar2->length;j++)
       arr3->A[k++]=ar2->A[j];
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

//intersection means copying the common elements between the 2 set arrays!
struct Array * Intersection(struct Array *ar1,struct Array *ar2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));
    while(i<ar1->length && j<ar2->length)
    {
        if(ar1->A[i]<ar2->A[j])
           i++;
        else if(ar1->A[i]>ar2->A[j])
           j++;
        else{
            arr3->A[k++]=ar1->A[i];
            j++;
        }
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}


//difference of A and B means the elements of A whicih are not present in B!
struct Array * Difference(struct Array *ar1,struct Array *ar2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));
    while(i<ar1->length && j<ar2->length)
    {
        if(ar1->A[i]<ar2->A[j])
           arr3->A[k++]=ar1->A[i++];
        else if(ar1->A[i]>ar2->A[j])
           j++;
        else{
            i++;j++;
        }
    }
    for(;i<ar1->length;i++)
      arr3->A[k++]=ar1->A[i];
    arr3->length=k;
    arr3->size=10;
    return arr3;
}



//main function to perform intersection , union and difference between the 2 set arrays
int main()
{
  struct Array ar1={{1,2,3,4,5},5,10};
  struct Array ar2={{2,4,6,8,10},5,10};
  struct Array *ar3;
  ar3=Union(&ar1,&ar2);
  printf("Unioin between 2 sets : \n");
  for(int i=0;i<ar3->length;i++){
    printf("%d\t",ar3->A[i]);
  }
  printf("\n");
  printf("Intersection between 2 sets : \n");
  ar3=Intersection(&ar1,&ar2);
  for(int i=0;i<ar3->length;i++){
    printf("%d\t",ar3->A[i]);
  }
  printf("\n");
  printf("Difference between 2 sets : \n");
  ar3=Difference(&ar1,&ar2);
  for(int i=0;i<ar3->length;i++){
    printf("%d\t",ar3->A[i]);
  }
  printf("\n");
}