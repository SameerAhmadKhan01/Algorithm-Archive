#include<iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if(n==1)
      return true;
    else if(n<1 || n%2!=0)
       return false;
    return isPowerOfTwo(n/2);
}

int main()
{
    if(isPowerOfTwo(16))
      cout<<"Yes its power of 2";
    else
     cout<<"Nope";
}