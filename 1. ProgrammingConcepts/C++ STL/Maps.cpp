#include<bits/stdc++.h>
using namespace std;


void printMap(map<int,string> &m)
{
    cout<<"Size of the map is : "<<m.size()<<endl;
    cout<<"KEY VALUE"<<endl;
    for(auto &pr:m)
      cout<<pr.first<<" : "<<pr.second<<endl; //O(logn) time-complexity
}


int main()
{
    map<int,string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd"; //O(logn) time-complexity
    m.insert({4,"afg"});
    printMap(m);
    //find function in map
    auto it=m.find(3);
    if(it!=m.end())
       cout<<it->first<<" "<<it->second<<"Val Fnd"<<endl;
    else 
      cout<<"NO Value";
    m.clear();
    printMap(m);
}