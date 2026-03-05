#include<iostream>
#include<stdio.h>
using namespace std;

class LTMatrix
{
private:
    int *A;
    int n;
public:
    LTMatrix(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    ~LTMatrix(){ delete []A;}

    void RsetValue(int i, int j, int val);
    int RgetValue(int i, int j);
    void display();
    void CsetValue(int i, int j , int val);
    int CgetValue(int i, int j );
};

void LTMatrix::RsetValue(int i, int j, int val)
{
    if(i >= j)
        A[(i*(i-1))/2 + (j-1)] = val;
}

int LTMatrix::RgetValue(int i, int j)
{
    if(i >= j)
        return A[(i*(i-1))/2 + (j-1)];
    return 0;
}

void LTMatrix::display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i >= j)
                printf("%4d", A[(i*(i-1))/2 + (j-1)]);
            else
                printf("%4d", 0);
        }
        printf("\n");
    }
}

void LTMatrix::CsetValue(int i , int j, int val)
{
    if(i >= j){
        int index = (n*(j-1)) - ((j-2)*(j-1))/2 + (i-j);
        A[index] = val;
    }
}

int LTMatrix::CgetValue(int i, int j)
{
    if(i >= j){
        int index = (n*(j-1)) - ((j-2)*(j-1))/2 + (i-j);
        return A[index];
    }
    return 0;
}



int main()
{

    LTMatrix rm(4);
    rm.RsetValue(1,1,1);
    rm.RsetValue(2,1,2);
    rm.RsetValue(2,2,3);
    rm.RsetValue(3,1,4);
    rm.RsetValue(3,2,5);
    rm.RsetValue(3,3,6);
    rm.RsetValue(4,1,7);
    rm.RsetValue(4,2,8);
    rm.RsetValue(4,3,9);
    rm.RsetValue(4,4,10);
    rm.display();

    cout<<endl<<endl<<endl;
    LTMatrix cm(4);
    cm.CsetValue(1, 1, 1);
    cm.CsetValue(2, 1, 2);
    cm.CsetValue(2, 2, 3);
    cm.CsetValue(3, 1, 4);
    cm.CsetValue(3, 2, 5);
    cm.CsetValue(3, 3, 6);
    cm.CsetValue(4, 1, 7);
    cm.CsetValue(4, 2, 8);
    cm.CsetValue(4, 3, 9);
    cm.CsetValue(4, 4, 10);
 
    cm.display();
}
