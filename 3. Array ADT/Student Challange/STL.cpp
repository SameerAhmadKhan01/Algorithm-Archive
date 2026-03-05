#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int missing(vector<int> nums)
{
    auto max_it=max(nums.begin(),nums.end());
    vector<int> H{max_it+1,0};
    cout<<max_it;
}

int main()
{
    vector<int> x={1,2,3,4,5,9};
    cout<<missing(x);
}