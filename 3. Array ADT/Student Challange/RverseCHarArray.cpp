#include<iostream>
#include<vector>
using namespace std;
void Reverse(vector<char>& s)
{
    int i=0,j=s.size()-1;
    while(i<j)
    {
        char temp=s[i];
        s[i++]=s[j];
        s[j--]=temp;
    }
    for(auto x : s)
    {
        cout<<x<<"\t";
    }
}

int main()
{
    vector<char> s={'H','e','l','l','o'};
    cout<<"Original string: "<<endl;
    for(auto x:s)
    {
        cout<<x<<"\t";
    }
    cout<<endl;
    Reverse(s);
}