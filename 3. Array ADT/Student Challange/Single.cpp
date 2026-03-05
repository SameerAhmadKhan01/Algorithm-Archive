#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int single(vector<int> num)
{
    auto max_it=*(max_element(num.begin(),num.end()));
    vector<int> H(max_it+1,0);
    for(int i=0;i<num.size();i++)
    {
        H[num[i]]++;
    }
    for(int i=0;i<H.size();i++)
    {
        if(H[i]==1)
          return i;
    }
    return -1;
}

int main(){
    vector<int> test{4, 1,2,1,2};
    cout<<single(test);
}