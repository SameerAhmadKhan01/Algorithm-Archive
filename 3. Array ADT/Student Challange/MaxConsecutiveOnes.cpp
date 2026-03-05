#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums{1,1,0,1}; //O/P: 3
    int c=0;
    int maxP=1;
    int i=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==1) c++;
        else c=0;
        maxP=(maxP<c)?c:maxP;
    }
    cout<<maxP;
}