#include<iostream>
using namespace std;
int OddSumAr(int ar[],int len)
{
    bool isOdd=ar[len]%2!=0;
    if(len<=0)
       return isOdd?ar[0]:0;
    else 
       return isOdd?ar[len]+OddSumAr(ar,len-1):OddSumAr(ar,len-1);
}

int main()
{
    int ar[]={1,2,3,4,5,6,7,8,9};
    cout<<"The Sum Of Odd Elements of the given Array : "<<OddSumAr(ar,9);
}

