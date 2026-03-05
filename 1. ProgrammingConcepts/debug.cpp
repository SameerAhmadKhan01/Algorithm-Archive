#include<iostream>
using namespace std;
int main(){
    int ar[]={1,2,3,4,5,6};
    int sum=0;
    for(auto x:ar){
        sum+=x;
    }
    cout<<"Sum of all array elemnts is : "<<sum;
}