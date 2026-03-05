#include<iostream>
#include<stdio.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};

//pointer to structure
int main(){
    // struct Rectangle r={10,5};
    // struct Rectangle *p=&r;
    // int l=(*p).length=69;
    // int b=p->breadth=6;
    // printf("%d is Length  %d is Breadth : ",l,b);
    // struct Rectangle *p;
    // p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
    // (*p).breadth=7;
    // printf("%d",p->breadth);
    //cpp
    Rectangle *r=new Rectangle;
    cout<<r->length<<"\t:Garbage val";
    //c
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    printf("\n%d :Garbage value ",p->length);
}