#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//creating a structure of a Stack Using Array
struct Stack 
{
    int size;
    int top;
    int *s;
};




//creating a stack
void create(struct Stack *st)
{
  printf("Enter the size of the stack : \n");
  scanf("%d",&st->size);
  st->s=(int *)malloc(sizeof(int)*st->size);
}





//to check if stack is empty or not 
bool isEmpty(struct Stack *st){
  return st->top==-1;
}




//to check if stack is full or not
bool isFull(struct Stack *st){
  return st->top==st->size-1;
}




//function to push values
void Push(struct Stack *st, int val)
{
   if(isFull(st))
     printf("Stack Overflow!");
   else{
     st->s[++st->top]=val;
   }
}




//function to pop and delete an element from the stack
int Pop(struct Stack *st)
{
  if(isEmpty(st))
    printf("Stack Underflow");
  else{
    int x=st->s[st->top--];
    return x;
  }
  return -999;
}




//function to peek in through a stack
int Peek(struct Stack *st,int pos)
{
    int index=st->top-pos+1;
    if(index<0 || index>st->size)
    {
      printf("Invalid Index");
      return -999;
    }
    else{
      int x=st->s[index];
      return x;
    }
    return -999;
}




//function to display the element of the stack 
void Display(struct Stack *st)
{
  for(int i=0;i<=st->top;i++)
  {
    printf("%d\t",st->s[i]);
  }
  printf("\n");
}




//implementation
int main()
{
  struct Stack *s;
  create(s);
  Push(s,7);
  Push(s,6);
  Push(s,5);
  Push(s,4);
  Push(s,3);
  Push(s,2);
  Push(s,1);
  Display(s);
  printf("Element at 5th Pos is : %d\n",Peek(s,5));
  while(!isEmpty(s))
    printf("%d\t",Pop(s));
  
}