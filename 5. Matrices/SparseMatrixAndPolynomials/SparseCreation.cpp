#include<iostream>
#include<stdio.h>
using namespace std;

struct Element{
    int i;
    int j;
    int x;
};

struct Sparse{
    int m;
    int n;
    int nums;
    struct Element *e;
};


void create(struct Sparse *s)
{
    printf("Enter Total no of rows,columns and non-zero elements in the sparse matrix : \n");
    scanf("%d%d%d",&s->m,&s->n,&s->nums);
    s->e=new Element[s->nums];  //s->e=(struct Element*)malloc(s->nums*sizeof(struct Element)); for C
    for(int i=0;i<s->nums;i++)
    {
        printf("Enter row,column index and the element : ");
        scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
    }
}

void display(struct Sparse s)
{
  int i,j,k=0;
  for(i=0;i<s.m;i++)
  {
    for(j=0;j<s.n;j++)
    {
      if(i==s.e[k].i && j==s.e[k].j)
        printf("%d ",s.e[k++].x);
      else
       printf("0 ");
    }
    printf("\n");
  }
}


int main(){
    struct Sparse s;
    create(&s);
    display(s);
}
