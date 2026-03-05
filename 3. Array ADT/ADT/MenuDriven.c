// //menu driven program for Array as ADT
// #include<stdio.h>
// #include<stdlib.h>
// struct Array{
//   int *A;
//   int length;
//   int size;
// };


// //this function takes input 
// void input(struct Array *ar, int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         printf("Enter value for A[%d]",i);
//         scanf("%d",&ar->A[i]);
//         ar->length++;
//     }
// }


// //this function all elements of array 
// void display(struct Array ar)
// {
//     printf("Elements are :\n ");
//     for(int i=0;i<ar.length;i++)
//     {
//         printf("%d\t",ar.A[i]);
//     }
//     printf("\n");
// }

// //inserts index at last index of the array!
// void Append(struct Array *ar,int index)
// {
//     if(ar->length < ar->size)
//       ar->A[ar->length++]=index;
//     else  
//       printf("OverFlow!");
// }


// //this function inserts the value at the given index
// void Insert(struct Array *ar, int ind , int x)
// {
//     int i;
//     if(ind>=0 && ind<=ar->length)
//     {
//       for(i=ar->length;i>index;i--)
//         ar->A[i]=ar->A[i-1];
//       ar->A[index]=x;
//       ar->length++;
//     }
// }


// //this function will delete an element from the array list and decrement the length of the array!
// void Delete(struct Array *ar, int index)
// {
//     if(index>=0 && index<ar->length)
//     {
//         for(int i=index ; i<ar->length;i++)
//           ar->A[i]=ar->A[i+1];
//         ar->length--;
//     }
// }


// //this function swaps 2 values 
// void swap(int *a, int *b)
// {
//     *a=(*a)^(*b);
//     *b=(*a)^(*b);
//     *a=(*a)^(*b);
// }

// //this function performs Linear Search => complexity O(n)
// //returns 1 if value is found , else returns 0
// int LinearSearch(struct Array ar, int key)
// {
//     for(int i=0;i<ar.length;i++)
//     {
//         if(key==ar.A[i])
//         {
//             swap(&ar.A[0],&ar.A[i]);  // improvement in Linear Search , makes the nexr searches faster!
//             return i;
//         }
//     }
//     return -1;
// }

// //searches wheather key is present or not , complexity O(logn)
// int BinarySearch(struct Array ar, int key)
// {
//     int l=0;
//     int h=ar.length-1;
//     int mid;
//     while(l<=u)
//     {
//         mid=l+(h-l)/2
//         if(key==ar.A[mid])
//         {
//             return mid;
//         }
//         else if(key<ar[mid])
//         {
//             h=mid-1;
//         }
//         else
//         {
//             l=mid+1;
//         }
//     }
//     return -1;
// }

// //recursice binary search 
// int RBinSrch(struct Array ar, int low , int high, int key)
// {
//     int mid;
//     if(l<=h)
//     {
//        if(key==ar.A[mid])
//        {
//         return mid;
//        }
//        else if(key>ar.A[mid])
//        {
//         return RBinSrch(ar,mid+1,high,key);
//        }
//        else{
//         return RBinSrch(ar,low,mid-1,key);
//        }
//     }
//     return -1;
// }


// //this function will return the element at the gicen index
// int Get(struct Array ar, int ind)
// {
//     if(ind>=0 && ind<ar.length)
//     {
//         return ar.A[ind];
//     }
//     return -1;
// }

// //this function will set the gicen value to given index
// void set(struct Array ar, int val , int ind)
// {
//     if(ind>=0 && ind<ar.length)
//     {
//         ar.A[ind]=val;
//     }
//     else 
//       printf("Invalid Index !");
// }


// //thiis function returns the max element of the array
// int Max(struct Array ar)
// {
//     int max=ar.A[0];
//     for(int i=1;i<ar.length;i++)
//     {
//         max=(ar.A[i]>max)?ar.A[i]:max;
//     }
//     return max;
// }

// //this function returns minimum of all the elements of the array
// int Min(struct Array ar)
// {
//     int min=ar.A[0];
//     for(int i=1;i<ar.length;i++)
//     {
//         min=(ar.A[i]<min)?ar.A[i]:min;
//     }
//     return min;
// }


// //this function returns the sum of all array elements 
// int Sum(struct Array ar)
// {
//     int s=0; //accumulator 
//     for(int i=0;i<ar.length;i++)
//     {
//         s+=ar.A[i];
//     }
//     return s;
// }


// //this function returns average of array elements
// float Avg(struct Array ar)
// {
//     return Sum(ar)/ar.length;
// }

// //Reversing an array irrespective of their order 
// void Reverse(struct Array *ar)
// {
//     int i=0,j=ar->length-1;
//     for(;i<j;i++,j--)
//     {
//         swap(&ar->A[i],&ar->A[j]);
//     }
// }

// //this will insert an element in the sorted array
// void InsertSort(struct Array *ar, int val)
// {
//     int i=ar->length-1;
//     while(ar->A[i]>val)
//     {
//         ar->A[i+1]=ar->A[i];
//         i--;
//     }
//     ar->A[i+1]=val;
//     ar->length++;
// }

// //returns 1 if the array is sorted 
// int isSorted(struct Array ar)
// {
//     for(int i=0;i<ar.length;i++)
//     {
//         if(ar.A[i]<ar.A[i+1])
//         {
//             return 0;
//         }
//     }
//     return 1;
// }


// //this function brings all the negative number in left hand side of array
// void ReArrange(struct Array *ar)
// {
//     int i,j;
//     i=0;
//     j=ar->length-1;
//     while(i<j)
//     {
//         while(ar->A[i]<0)
//           i++;
//         while(ar->A[j]>0)
//           j++;
//         if(i<j)
//           swap(&ar->A[i],&ar->A[j]);
//     }
// }


// //this fubction merges two sorted array and returns a sorted array !
// struct Array* Merge(struct Array *ar1, struct Array *ar2)
// {
//     int i,j,k;
//     i=j=k=0;
//     struct Array *ar3;
//     ar3=(struct Array *)malloc(sizeof(struct Array));
//     while(i<ar1->length && j<ar2->length)
//     {
//         if(ar1->A[i]<ar2->A[j])
//             ar3->A[k++]=ar1->A[i++];
//         else if(ar2->A[j]<ar1->A[i])
//             ar3->A[k++]=ar2->A[j++];
//         else 
//         {
//             ar3->A[k++]=ar1->A[i++];
//             j++;
//         }
//     }
//     for(;i<ar1->length;i++)
//        ar3->A[k++]=ar1->A[i];
//     for(;j<ar2->length;j++)
//        ar3->A[k++]=ar2->A[j];
//     ar3->length=k;
//     ar3->size=(ar1->size+ar2->size);// dynamic sized array 
//     return ar3;
// }


// //this function performs Union
// struct Array * Union(struct Array *ar1,struct Array *ar2){
//     int i,j,k;
//     i=j=k=0;
//     struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));
//     while(i<ar1->length && j<ar2->length)
//     {
//         if(ar1->A[i]<ar2->A[j])
//            arr3->A[k++]=ar1->A[i++];
//         else if(ar1->A[i]>ar2->A[j])
//            arr3->A[k++]=ar2->A[j];
//         else{
//             arr3->A[k++]=ar1->A[i++];
//             j++;
//         }
//     }
//     for(;i<ar1->length;i++)
//       arr3->A[k++]=ar1->A[i];
//     for(;j<ar2->length;j++)
//        arr3->A[k++]=ar2->A[j];
//     arr3->length=k;
//     arr3->size=10;
//     return arr3;
// }

// //intersection means copying the common elements between the 2 set arrays!
// struct Array * Intersection(struct Array *ar1,struct Array *ar2){
//     int i,j,k;
//     i=j=k=0;
//     struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));
//     while(i<ar1->length && j<ar2->length)
//     {
//         if(ar1->A[i]<ar2->A[j])
//            i++;
//         else if(ar1->A[i]>ar2->A[j])
//            j++;
//         else{
//             arr3->A[k++]=ar1->A[i];
//             j++;
//         }
//     }
//     arr3->length=k;
//     arr3->size=10;
//     return arr3;
// }


// //difference of A and B means the elements of A whicih are not present in B!
// struct Array * Difference(struct Array *ar1,struct Array *ar2){
//     int i,j,k;
//     i=j=k=0;
//     struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));
//     while(i<ar1->length && j<ar2->length)
//     {
//         if(ar1->A[i]<ar2->A[j])
//            arr3->A[k++]=ar1->A[i++];
//         else if(ar1->A[i]>ar2->A[j])
//            j++;
//         else{
//             i++;j++;
//         }
//     }
//     for(;i<ar1->length;i++)
//       arr3->A[k++]=ar1->A[i];
//     arr3->length=k;
//     arr3->size=10;
//     return arr3;
// }



// //main function for the menu
// int main()
// {
//     struct Array ar1;
//     struct Array ar2;
//     struct Array *ar3;
//     int size,len;
//     ar1.length=ar2.length=0;
//     printf("Enter size of the Array , It will be common in both the arrays : ");
//     scanf("%d",&size);
//     ar1.A=(int *)malloc(ar1.size*sizeof(int));
//     ar2.A=(int *)malloc(ar2.size*sizeof(int));
//     printf("Enter No of Elements you want to enter in both the arrays , this will be common as well : ");
//     scanf("%d",&len);
//     printf("Enter the values for first Array : ");
//     input(ar1,len);
//     printf("Enter values for second Array : ");
//     input(ar2,len);
//     ar3->A=(int *)malloc((ar1.length+ar2.length)*sizeof(int));
//     do
//     {

//     }
// }
       


//menu driven program for Array as ADT
#include<stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
    int length;
    int size;
};

//this function swaps 2 values 
void swap(int *a, int *b)
{
    // Using XOR swap for illustrative purposes (standard practice usually uses a temp variable)
    *a=(*a)^(*b);
    *b=(*a)^(*b);
    *a=(*a)^(*b);
}

//this function takes input and sets the array length
void input(struct Array *ar, int len)
{
    if (len > ar->size) {
        printf("Error: Input length exceeds array size.\n");
        return;
    }
    ar->length = 0;
    for(int i=0;i<len;i++)
    {
        printf("Enter value for A[%d]: ",i);
        scanf("%d",&ar->A[i]);
        ar->length++;
    }
}

//this function displays all elements of array 
void display(struct Array ar)
{
    printf("Elements are:\n");
    for(int i=0;i<ar.length;i++)
    {
        printf("%d\t",ar.A[i]);
    }
    printf("\n");
}

//inserts index at last index of the array!
void Append(struct Array *ar,int x) // Renamed parameter from 'index' to 'x' for clarity
{
    if(ar->length < ar->size)
      ar->A[ar->length++]=x;
    else  
      printf("OverFlow! Array is full.\n");
}

//this function inserts the value at the given index
void Insert(struct Array *ar, int ind , int x)
{
    int i;
    // Condition check: index must be valid (0 to length)
    if(ind>=0 && ind <=ar->length && ar->length < ar->size)
    {
      // Shift elements to the right
      for(i=ar->length;i>ind;i--) 
        ar->A[i]=ar->A[i-1];
      
      ar->A[ind]=x;
      ar->length++;
    } else {
        printf("Insertion failed: Invalid index or array is full.\n");
    }
}

//this function will delete an element from the array list and decrement the length of the array!
int Delete(struct Array *ar, int index)
{
    int x = -1; // Value of the deleted element
    if(index>=0 && index<ar->length)
    {
        x = ar->A[index];
        // Shift elements to the left
        for(int i=index ; i < ar->length - 1; i++) 
          ar->A[i]=ar->A[i+1];
        
        ar->length--;
    }
    return x;
}

//this function performs Linear Search => complexity O(n)
//returns index if value is found, else returns -1. Uses Move to Head optimization.
int LinearSearch(struct Array *ar, int key) // Must take a pointer to allow 'swap' modification
{
    for(int i=0;i<ar->length;i++)
    {
        if(key==ar->A[i])
        {
            // improvement in Linear Search: Move to Front/Head
            swap(&ar->A[0],&ar->A[i]);
            // If moved to index 0, the original index is i. 
            // For simplicity, just return the found element's index.
            // If we swap, the element is now at index 0, so we return 0.
            return 0; 
        }
    }
    return -1;
}

//searches whether key is present or not, complexity O(logn). Requires array to be sorted.
int BinarySearch(struct Array ar, int key)
{
    int l=0;
    int h=ar.length-1;
    int mid;
    while(l<=h) // Corrected 'u' to 'h'
    {
        mid=l+(h-l)/2; // Corrected missing semicolon
        if(key==ar.A[mid])
        {
            return mid;
        }
        else if(key<ar.A[mid]) // Corrected 'ar[mid]' to 'ar.A[mid]'
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}

//recursive binary search 
int RBinSrch(struct Array ar, int low , int high, int key)
{
    int mid;
    if(low<=high) // Corrected 'l' to 'low' and 'h' to 'high'
    {
       mid = low + (high - low) / 2; // Added mid calculation
       if(key==ar.A[mid])
       {
         return mid;
       }
       else if(key>ar.A[mid])
       {
         return RBinSrch(ar,mid+1,high,key);
       }
       else{ // key < ar.A[mid]
         return RBinSrch(ar,low,mid-1,key);
       }
    }
    return -1;
}


//this function will return the element at the given index
int Get(struct Array ar, int ind)
{
    if(ind>=0 && ind<ar.length)
    {
        return ar.A[ind];
    }
    return -1; // Return -1 for invalid index
}

//this function will set the given value to given index
void Set(struct Array *ar, int val , int ind) // Corrected function name to 'Set', takes pointer
{
    if(ind>=0 && ind<ar->length)
    {
        ar->A[ind]=val;
    }
    else 
      printf("Invalid Index!\n");
}


//this function returns the max element of the array
int Max(struct Array ar)
{
    int max=ar.A[0];
    for(int i=1;i<ar.length;i++)
    {
        max=(ar.A[i]>max)?ar.A[i]:max;
    }
    return max;
}

//this function returns minimum of all the elements of the array
int Min(struct Array ar)
{
    int min=ar.A[0];
    for(int i=1;i<ar.length;i++)
    {
        min=(ar.A[i]<min)?ar.A[i]:min;
    }
    return min;
}


//this function returns the sum of all array elements 
int Sum(struct Array ar)
{
    int s=0; //accumulator 
    for(int i=0;i<ar.length;i++)
    {
        s+=ar.A[i];
    }
    return s;
}


//this function returns average of array elements
float Avg(struct Array ar)
{
    // Corrected to float division
    if (ar.length == 0) return 0.0;
    return (float)Sum(ar)/ar.length;
}

//Reversing an array 
void Reverse(struct Array *ar)
{
    int i=0,j=ar->length-1;
    for(;i<j;i++,j--)
    {
        swap(&ar->A[i],&ar->A[j]);
    }
}

//this will insert an element in the sorted array
void InsertSort(struct Array *ar, int val)
{
    if(ar->length == ar->size) {
        printf("Insertion failed: Array is full.\n");
        return;
    }
    int i=ar->length-1;
    // Check if i >= 0 is crucial to prevent buffer underflow
    while(i>=0 && ar->A[i]>val) 
    {
        ar->A[i+1]=ar->A[i];
        i--;
    }
    ar->A[i+1]=val;
    ar->length++;
}

//returns 1 if the array is sorted (in non-decreasing order)
int isSorted(struct Array ar)
{
    // Loop must go up to length-1 to compare i and i+1
    for(int i=0;i<ar.length-1;i++) 
    {
        // If current element is greater than the next, it's not sorted
        if(ar.A[i]>ar.A[i+1]) 
        {
            return 0;
        }
    }
    return 1;
}


//this function brings all the negative number to the left and non-negative to the right
void ReArrange(struct Array *ar)
{
    int i=0;
    int j=ar->length-1;
    while(i<j)
    {
        // Find the first non-negative element from the left
        while(ar->A[i]<0) 
          i++;
        // Find the first negative element from the right
        while(ar->A[j]>=0) // Corrected condition: we want to stop when a negative element is found
          j--;
        
        if(i<j)
          swap(&ar->A[i],&ar->A[j]);
    }
}


//this function merges two SORTED array and returns a new sorted array. Duplicates are kept.
struct Array* Merge(struct Array *ar1, struct Array *ar2)
{
    int i,j,k;
    i=j=k=0;
    // Allocate memory for the new structure
    struct Array *ar3 = (struct Array *)malloc(sizeof(struct Array)); 
    // Set size for the new array and allocate memory for the elements
    ar3->size = ar1->length + ar2->length;
    ar3->A = (int *)malloc(ar3->size * sizeof(int));

    while(i<ar1->length && j<ar2->length)
    {
        if(ar1->A[i]<ar2->A[j])
            ar3->A[k++]=ar1->A[i++];
        else // This handles ar2->A[j] < ar1->A[i] AND equality (maintaining all elements)
            ar3->A[k++]=ar2->A[j++];
    }
    
    // Copy remaining elements
    for(;i<ar1->length;i++)
       ar3->A[k++]=ar1->A[i];
    for(;j<ar2->length;j++)
       ar3->A[k++]=ar2->A[j];
    
    ar3->length=k;
    return ar3;
}


//this function performs Union of two SORTED arrays (no duplicates)
struct Array * Union(struct Array *ar1,struct Array *ar2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));
    // Max possible size is sum of lengths
    arr3->size = ar1->length + ar2->length; 
    arr3->A=(int*)malloc(arr3->size*sizeof(int)); 

    while(i<ar1->length && j<ar2->length)
    {
        if(ar1->A[i]<ar2->A[j])
           arr3->A[k++]=ar1->A[i++];
        else if(ar1->A[i]>ar2->A[j]) // Corrected condition: check if ar1 > ar2
           arr3->A[k++]=ar2->A[j++]; // Corrected to increment j
        else{
            arr3->A[k++]=ar1->A[i++];
            j++; // Advance both to skip duplicate
        }
    }
    for(;i<ar1->length;i++)
      arr3->A[k++]=ar1->A[i];
    for(;j<ar2->length;j++)
       arr3->A[k++]=ar2->A[j];
    
    arr3->length=k;
    return arr3;
}

//intersection means copying the common elements between the 2 set arrays!
struct Array * Intersection(struct Array *ar1,struct Array *ar2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));
    // Max size is min of lengths
    arr3->size = (ar1->length < ar2->length ? ar1->length : ar2->length); 
    arr3->A=(int*)malloc(arr3->size*sizeof(int));
    
    while(i<ar1->length && j<ar2->length)
    {
        if(ar1->A[i]<ar2->A[j])
           i++;
        else if(ar1->A[i]>ar2->A[j])
           j++;
        else{
            arr3->A[k++]=ar1->A[i++];
            j++; // Advance both to check next element pair
        }
    }
    arr3->length=k;
    return arr3;
}


//difference of A and B means the elements of A which are not present in B! (A - B)
struct Array * Difference(struct Array *ar1,struct Array *ar2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array*)malloc(sizeof(struct Array));
    // Max size is ar1 length
    arr3->size = ar1->length; 
    arr3->A=(int*)malloc(arr3->size*sizeof(int));

    while(i<ar1->length && j<ar2->length)
    {
        if(ar1->A[i]<ar2->A[j])
           arr3->A[k++]=ar1->A[i++]; // Element in ar1 but not ar2
        else if(ar1->A[i]>ar2->A[j])
           j++; // Advance ar2 to find a match or move past smaller elements
        else{
            i++;j++; // Elements are equal, skip both (not included in difference)
        }
    }
    for(;i<ar1->length;i++)
      arr3->A[k++]=ar1->A[i]; // Copy remaining elements from ar1

    arr3->length=k;
    return arr3;
}


//main function for the menu
int main()
{
    struct Array ar1;
    struct Array ar2;
    struct Array *ar3 = NULL; // Initialize to NULL

    int size,len;
    int ch;
    int x, index;
    
    printf("Enter size of the Array (Max Capacity): ");
    scanf("%d",&size);
    
    // Initialize array 1 and 2 sizes and allocate memory
    ar1.size = size;
    ar2.size = size;
    ar1.length = 0;
    ar2.length = 0;
    
    ar1.A=(int *)malloc(ar1.size*sizeof(int));
    ar2.A=(int *)malloc(ar2.size*sizeof(int));
    
    if (ar1.A == NULL || ar2.A == NULL) {
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    printf("Enter No of Elements you want to enter in Array 1: ");
    scanf("%d",&len);
    if(len <= ar1.size) {
        printf("Enter the values for first Array:\n");
        input(&ar1,len);
    } else {
        printf("Input length exceeds size. Skipping input for Array 1.\n");
    }

    printf("Enter No of Elements you want to enter in Array 2: ");
    scanf("%d",&len);
    if(len <= ar2.size) {
        printf("Enter values for second Array:\n");
        input(&ar2,len);
    } else {
        printf("Input length exceeds size. Skipping input for Array 2.\n");
    }

    do
    {
        printf("\n\n--- Array Menu ---\n");
        printf("1. Insert Element (in Array 1)\n");
        printf("2. Delete Element (from Array 1)\n");
        printf("3. Linear Search (in Array 1)\n");
        printf("4. Binary Search (in Array 1)\n");
        printf("5. Max/Min/Sum/Avg (Array 1)\n");
        printf("6. Sort/Rearrange/Reverse (Array 1)\n");
        printf("7. Merge/Union/Intersection/Difference\n");
        printf("8. Display Array 1\n");
        printf("9. Display Array 2\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: 
                printf("Enter element to insert: ");
                scanf("%d", &x);
                printf("Enter index to insert at (0 to %d): ", ar1.length);
                scanf("%d", &index);
                Insert(&ar1, index, x);
                break;
            case 2:
                printf("Enter index to delete (0 to %d): ", ar1.length - 1);
                scanf("%d", &index);
                x = Delete(&ar1, index);
                if (x != -1)
                    printf("Deleted Element is %d\n", x);
                else
                    printf("Deletion failed: Invalid index.\n");
                break;
            case 3:
                printf("Enter element to search (Linear): ");
                scanf("%d", &x);
                index = LinearSearch(&ar1, x);
                if (index != -1)
                    printf("Element found (index after move to head): %d\n", index);
                else
                    printf("Element not found.\n");
                break;
            case 4:
                // NOTE: Binary search requires a sorted array
                if (!isSorted(ar1)) {
                    printf("Error: Array 1 must be sorted for Binary Search.\n");
                } else {
                    printf("Enter element to search (Binary): ");
                    scanf("%d", &x);
                    index = BinarySearch(ar1, x);
                    if (index != -1)
                        printf("Element found at index: %d\n", index);
                    else
                        printf("Element not found.\n");
                }
                break;
            case 5:
                printf("Max: %d\n", Max(ar1));
                printf("Min: %d\n", Min(ar1));
                printf("Sum: %d\n", Sum(ar1));
                printf("Average: %.2f\n", Avg(ar1));
                break;
            case 6:
                printf("Array 1 is sorted: %s\n", isSorted(ar1) ? "Yes" : "No");
                printf("Reversing Array 1...\n");
                Reverse(&ar1);
                printf("Rearranging Array 1 (Negatives Left)...\n");
                ReArrange(&ar1);
                break;
            case 7:
                printf("1. Merge\n2. Union\n3. Intersection\n4. Difference (Arr1-Arr2)\nEnter choice: ");
                scanf("%d", &index);

                // Ensure both arrays are sorted for set operations
                if (!isSorted(ar1) || !isSorted(ar2)) {
                    printf("Error: Both arrays must be sorted for Merge/Set operations.\n");
                    break;
                }
                
                // Free previous ar3 memory if it exists
                if (ar3 != NULL) {
                    free(ar3->A);
                    free(ar3);
                    ar3 = NULL;
                }

                switch (index) {
                    case 1: ar3 = Merge(&ar1, &ar2); break;
                    case 2: ar3 = Union(&ar1, &ar2); break;
                    case 3: ar3 = Intersection(&ar1, &ar2); break;
                    case 4: ar3 = Difference(&ar1, &ar2); break;
                    default: printf("Invalid Sub-choice.\n"); break;
                }
                if (ar3 != NULL) {
                    printf("Resulting Array (Array 3) is:\n");
                    display(*ar3);
                }
                break;
            case 8:
                display(ar1);
                break;
            case 9:
                display(ar2);
                break;
            case 10:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
    } while(ch != 10);
    
    // Cleanup dynamic memory
    free(ar1.A);
    free(ar2.A);
    if (ar3 != NULL) {
        free(ar3->A);
        free(ar3);
    }

    return 0;
}