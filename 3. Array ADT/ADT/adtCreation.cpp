#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Array {
    int *A;
    int len;
    int size;
};

int main()
{
    struct Array ar;
    cout<<"Enter the size of array : ";
    int size;
    cin>>&ar.size;
    ar.len=0;
    ar.A=new int[size]; //for Cpp
    // ar.A=(int*)malloc(ar.size*sizeof(int));  //for C

}