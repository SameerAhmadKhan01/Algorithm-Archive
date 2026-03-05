#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v={1,2,3,4,5,5,6,6,7,9};
    // vector<int>::iterator it;
    // for(it=v.begin();it!=v.end();it++)
    // {
    //     cout<<(*it)<<"\t";
    // }
    // cout<<endl;
    //pair vector
    
    
    vector<pair<int,int>> v_p={{1,2},{3,4},{4,5}};
    // vector<pair<int,int>>::iterator it;
    // for(it=v_p.begin();it!=v_p.end();it++)
    // {
    //     cout<<it->first<<endl;
    // }
    // return 0;
    //short method to use LOOP
    for(auto &x:v_p)
      cout<<x.first<<"and"<<x.second<<endl;
    return 0;
    
}