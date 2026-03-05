#include<iostream>
#include<stdio.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main(){
    struct Rectangle r;
    r={23,3};
    printf("Area of Rectangle is : %d",r.length*r.breadth);
}