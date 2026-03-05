#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   vector<int> a={0,1,0,3,12};
   int x=0;
   for(int  i=0;i<a.size();i++)
   {
    if(a[i]!=0)
    {
        a[x++]=a[i];
    }
   }
   
   for(int i=x;i<a.size();i++)
         a[i]=0;


   for(auto x:a)
      cout<<x<<"\t";
}