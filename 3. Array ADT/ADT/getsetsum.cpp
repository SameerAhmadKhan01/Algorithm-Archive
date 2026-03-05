#include<iostream>
#include<stdio.h>
using namespace std;
class Array{
    public:
     int *A;
     int length;
     int size;
    public:
     Array(int *p,int l, int s);
     int get(int index);
     void set(int index, int x);
     int sum();
     float Avg();
     int max();
     int min();  
};


Array::Array(int *p, int l, int s){
    A=p;
    length=l;
    size=s;
}

int Array::get(int index){
    if(index>=0&&index<length){
        return A[index];
    }
    return -1;
}

void Array::set(int index, int x){
    if(index>=0 && index<length){
        A[index]=x;
    }
}

int Array::sum(){
    int total=0;
    for(int i=0;i<length;i++){
        total+=A[i];
    }
    return total;
}

float Array::Avg(){
    return (float)sum()/length;
}

int Array::max(){
    int max=A[0];
    for(int i=0;i<length;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
}


int Array::min(){
    int min=A[0];
    for(int i=0;i<length;i++){
        if(min>A[i]){
            min=A[i];
        }
    }
    return min;
}


int main(){
    int *p=new int[10];
    for(int i=0;i<10;i++){
        cout<<"Enter value for Array : ";
        cin>>p[i];
    }
    Array ar(p,10,10);
    cout<<"Original Array is ";
    for (int i = 0; i < ar.length; i++) {
    cout << ar.A[i] << "\t";
    }
    cout<<"\n";
    cout<<"Maximum element in the Array is : "<<ar.max()<<endl;
    cout<<"Minimum element in the Array is : "<<ar.min()<<endl;
    cout<<"Element at index 9 is : "<<ar.get(9)<<"\n";
    cout<<"Sum of all array elements are : "<<ar.sum()<<"\n";
    cout<<"Average of Array is : "<<ar.Avg();
}

