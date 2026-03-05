#include<iostream>
using namespace std;
 bool isPalindrome(int x) {
        int r=0;
        if(x<0)
          return false;
        else 
          r=r*10+(x%10);
          isPalindrome(x/10);
        return r==x;
}

int main()
{
    cout<<isPalindrome(1121);
}