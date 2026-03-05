//1 using auxillary array
#include<iostream>
#include<stdio.h>
using namespace std;
class Array{
    private:
     int *A;
     int length=1;
     int size;
    public:
     Array(){};
     Array(int size){
        this->size=size;
        A=new int[this->size];
     }
     //function to take input in the array
     void input(){
        for(int i=0;i<size;i++){
            printf("Enter value for A[%d]",i);
            cin>>A[i];
            length++;
        }
     }
     //reversing using auxillary array
     void rev1(){
        int *B=new int[length];
        int i,j;
        for(i=0,j=size-1;i>=0;i++,j--){
            B[i]=A[j];
        }
        for(int i=0;i<size;i++){
            A[i]=B[i];
        }
        delete []B;
     }
     //reversing using double pointer
     void rev2(){
        for(int i=0,j=size-1;i<j;i++,j--){
            A[i]=A[i]^A[j];
            A[j]=A[i]^A[j];
            A[i]=A[i]^A[j];
        }
     }
     void display(){
        for(int i=0;i<size;i++){
          cout<<A[i]<<"\t";
        }
     }
};


int main(){
    cout<<"Enter size of the Array you want to create : ";
    int size;
    cin>>size;
    Array obj(size);
    obj.input();
    cout<<"Original Array : "<<endl;
    obj.display();
    obj.rev2();
    cout<<"\nArray after reversing : "<<endl;
    obj.display();
}
