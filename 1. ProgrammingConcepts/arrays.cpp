#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array : ";
    scanf("%d",&n);
    int ar[n];
    for(int x:ar){
        printf("%4d\t",x);//prints garbage value if the array is not entered manually or through any other methods 
    }
}
