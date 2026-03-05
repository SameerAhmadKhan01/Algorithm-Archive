#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ar{0,1,0,0,0,3,4,5,6,7};
    // int x=0;
    // int i=0;
    // for(;i<ar.size();i++)
    // {
    //     if(ar[i]!=0)
    //     {
    //         ar[x++]=ar[i];
    //     }
    // }
    // for(int j=x;j<ar.size();j++)
    //     ar[j]=0;
    // for(auto x:ar)
    // {
    //     cout<<x<<"\t";
    // }
    int left=0;
    int right=0;
    while(right<ar.size())
    {
        if(ar[right]!=0){
            int temp=ar[right];
            ar[right]=ar[left];
            ar[left]=temp;
            left++;
        }
        right++;
    }
    for(auto x:ar)
       cout<<x<<"\t";
}