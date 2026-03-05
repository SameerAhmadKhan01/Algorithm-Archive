// //989. Add to Array-Form of Integer

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<int>& Res(vector<int>& nums,int k)
// {
//     int temp=k;
//     int ind=nums.size()-1;
//     while(temp!=0){
//         int d=temp%10;
//         nums[ind--]+=d;
//         temp/=10;
//     }
//     return nums;
// }


// int main(){
//     vector<int> v{1,2,0,0};
//     vector<int> *p=Res(v,34);
//     for(int i=0;i<p->size();i++)
//     {
//         cout<<p[i]<<endl;
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> addToArrayForm(vector<int>& nums, int k) {
    int i = nums.size() - 1;
    int carry = k;

    while (i >= 0 || carry > 0) {
        if (i >= 0) {
            carry += nums[i];
            nums[i] = carry % 10;
        } else {
            nums.insert(nums.begin(), carry % 10);
        }
        carry /= 10;
        i--;
    }
    return nums;
}

int main() {
    vector<int> v{1,2,0,0};
    vector<int> res = addToArrayForm(v, 34);

    for (int x : res)
        cout << x << " ";
}
