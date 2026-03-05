// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int> nums1{1,2,3,0,0,0};
//     int m=3; //represents the length of array 1 nums1
//     vector<int> nums2{2,5,6};
//     int n=3;
//     int i,j,k;
//     i=j=k=0;
//     vector<int> cpy(nums1.begin(),nums1.begin()+m);
//     while(i<m && j<n)
//     {
//         if(cpy[i]<nums2[j])
//            nums1[k++]=cpy[i++];
//         else if(cpy[i]>nums2[j])
//            nums1[k++]=nums2[j++];
//         else{
//             nums1[k++]=nums2[j++];
//             i++;
//         }
//     }
//     for(;i<m;i++){
//         nums1[k++]=cpy[i];
//     }
//     for(;j<n;j++)
//        nums1[k++]=nums2[j];

//     for(auto x : nums1)
//     {
//         cout<<x<<"\t";
//     }
// }



#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums1{1,2,3,0,0,0};
    int m = 3;

    vector<int> nums2{2,5,6};
    int n = 3;

    vector<int> cpy(nums1.begin(), nums1.begin() + m);

    int i = 0, j = 0, k = 0;

    while(i < m && j < n)
    {
        if(cpy[i] <= nums2[j])
            nums1[k++] = cpy[i++];
        else
            nums1[k++] = nums2[j++];
    }

    //appending remaining elements of cpy[] and nums2[]
    while(i < m)
        nums1[k++] = cpy[i++];

    while(j < n)
        nums1[k++] = nums2[j++];

    for(auto x : nums1)
        cout << x << "\t";
}
