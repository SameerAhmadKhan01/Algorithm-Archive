#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class Array
{
    private:
     vector<int> A;
     int size;
    public:
      Array(int s){this->size=s;}
      void input()
      {
        for(int i=0;i<size;i++)
        {
           cout<<"Enter a value for A["<<i<<"]: ";
           int n;
           cin>>n;
           A.push_back(n);
        }
      }
      void MultiMissing();
};

void Array::MultiMissing()
{
    int diff=A[0]-0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]-i!=diff){
        while(A[i]-i>diff)
        {
            printf("%d\t",(diff+i));
            diff++;
        }
      }
    }
    cout<<"Are the missing ELements in the Array ";
}

int main(){
   cout<<"Enter size of Vector : ";
   int s;
   cin>>s;
   Array ar(s);
   ar.input();
   cout<<endl;
   ar.MultiMissing();
}