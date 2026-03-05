#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Term
{
    int coeff;
    int expo;
};

struct  Polynomial
{
    int n; //total number of non-zero terms
    struct Term *t;
};


//creation of a polynomial
// void create(){
//    struct Polynomial P;
//    printf("Enter number of non zero terms : ");
//    scanf("%d",&P.n);
//    P.t=(struct Term * )malloc(P.n*sizeof(struct Term));
//    //taking input
//    for(int i=0;i<P.n;i++)
//    {
//       printf("Enter CoEfficient and Exponent for Term %d",i+1);
//       scanf("%d%d",&P.t[i].coeff,&P.t[i].expo);
//    }
// }
void create(struct Polynomial *p)
{
   printf("Enter number of non zero terms : ");
   scanf("%d", &p->n);

   p->t = (struct Term*)malloc(p->n * sizeof(struct Term));

   for(int i = 0; i < p->n; i++)
   {
      printf("Enter Coefficient and Exponent for Term %d: ", i+1);
      scanf("%d %d", &p->t[i].coeff, &p->t[i].expo);
   }
}



//to display the equation in terms of x 
void display(struct Polynomial p){
    for(int i=0;i<p.n;i++)
    {
        if(p.t[i].coeff!=0 && p.t[i].expo!=0)
        {
            printf("%dx^%d",p.t[i].coeff,p.t[i].expo);
        }
        else 
         continue;
    }
}


int main(){
    struct Polynomial p;
    create(&p);
    display(p);
    return 0;
}