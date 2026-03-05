#include<iostream>
#include<stdio.h>
using namespace std;
struct Cards{
    int face;
    int shape;
    int num;
};
int main(){
    struct Cards deck[52]={{0,0,1},{0,1,2}};
    printf("%d",deck[1].shape);
    deck[52].face=4;
    deck[52].shape=4;
    deck[52].num=4;
    cout<<"Deck 52 will have the following values ";
    printf("SHAPE %d , FACE %d , NUMBER %d",deck[52].face, deck[52].shape, deck[52].num);
}