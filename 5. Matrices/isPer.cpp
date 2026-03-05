#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

bool isPerfect(int n)
{
    int tmp=sqrt(n);
    return(tmp*tmp==n);
}

int main()
{
    cout<<boolalpha<<isPerfect(14);
}