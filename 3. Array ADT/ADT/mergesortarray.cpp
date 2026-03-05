#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void mergeSort(vector<int>& nums1,int m, vector<int>& nums2 , int n)
{
   for(int i=0;i<n;i++)
   {
    nums1[m++]=nums2[i];
   }
   sort(nums1.begin(),nums1.end());
}


int main()
{
    vector<int> nums1={1,2,3,0,0,0};
    int m=3;
    vector<int> nums2={2,5,6};
    int n=3;
    mergeSort(nums1,m,nums2,n);
    for(auto x:nums1)
    {
        cout<<x<<"\t";
    }
}
