#include<iostream>
using namespace std;
void main(){
    int *p=new int[5];
    int *q=new int[10];
    p={1,2,3,4,5};
    q={1,2,3,4,5};
    delete []p;
    p=q;//changing p to q , q becomes p hence with bigger size 
    q=NULL; //q points to null.

int **A;
A=new int[3];
A[0]=new int[4];

}