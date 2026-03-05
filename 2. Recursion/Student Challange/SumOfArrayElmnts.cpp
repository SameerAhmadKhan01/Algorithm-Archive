#include<iostream>
#include<vector>
using namespace std;

int ArSum(vector<int> &ar , int len)
{
    if(len<0)
    return 0;
    else 
      return ar[len]+ArSum(ar,len-1);
}


int main()
{
    vector<int> ar{1,2,3,4,5};
    cout<<ArSum(ar,ar.size()-1);
}