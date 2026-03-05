#include<iostream>
using namespace std;
//head ended recursion
int fun1(int n){
    if(n>0){
       fun1(n-1);
       cout<<n<<"\t";
    }
}

//main fn
int main(void){
    cout<<"enter value for n : ";
    int n;
    cin>>n;
    fun1(n);
}

