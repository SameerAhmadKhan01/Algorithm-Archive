#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

class Matrix
{
    private:
     int *A;
     int n; //since diagonal matrices are square thats why only one parameter is taken in consideration 
    public:
      Matrix(){
        n=10;
        A=new int[10];
      }
      Matrix(int n){ 
        this->n=n;
        A=new int[n];
    }
    ~Matrix(){
        delete []A;
    }
    void set(int i, int j,int val);
    int get(int i , int j);
    void display();
    int getDimensions();
};


void Matrix::set( int i , int j , int val){
    if(i==j)
      A[i-1]=val;
}


int Matrix::get(int i , int j){
    if(i==j)
      return A[i-1];
    else 
      return 0;
}

int Matrix::getDimensions(){ return n;}

void Matrix::display(){
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
             printf("%4d",0);
            else
             printf("%4d",A[j-1]);
        }
        printf("\n");
     }
}


int main(){
    int dim;
    cout<<"Enter Dimension of the Square Matrix : ";
    cin>>dim;
    Matrix obj(dim);
    printf("Enter the diagonal Elements only: ");
    for(int i=0;i<dim;i++)
    {
        cout<<"Enter value for diagonal element "<<i+1<<" :  ";
        int temp;
        cin>>temp;
        obj.set(i,i,temp);
    }
    printf("The Entered Diagonal Matrix is : \n");
    obj.display();
    printf("The Dimension of the matrix is %d x %d",obj.getDimensions(),obj.getDimensions());
}