#include<iostream>
using namespace std;

bool isPowerOf3(int n)
{
    if(n%3!=0 || (n<1))
       return false;
    else if(n==1)
       return true;
    else  
       return isPowerOf3(n/3);
}


int main()
{
    int n;
    cout<<"Enter a number to check if its a power of 3 ";
    cin>>n;
    if(isPowerOf3(n))
      cout<<"Yes";
    else 
       cout<<"No";
}