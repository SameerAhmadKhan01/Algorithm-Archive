#include<iostream>
using namespace std;
int RecurFact(int n)
{
    if(n<=1 && n>=0)
       return n;
    else  
       return n*RecurFact(n-1);
}

int main(){
    cout<<"Factorial of 5 : "<<RecurFact(5);
}