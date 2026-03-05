#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("bcd");
    s.insert("cde");
    for(auto &ch:s)
    {
        cout<<ch<<"\n";
    }
    return 0;
}