#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int *p;
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    p=new int[n]; //for Cpp
    // p=(int*)malloc(5*sizeof(int));  //for C
    cout<<p[0];
}