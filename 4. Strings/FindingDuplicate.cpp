#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Str
{
private:
 string s;
public:
 Str(){};
 Str(string s){this->s=s;}
 vector<char> ReturnDuplicate();
};

vector<char> Str::ReturnDuplicate()
{
    vector<char> dup;
    char LastDup='\0';
    for(int i=0;i<s.length()-1;i++)
    {
        if(s.at(i)==s.at(i+1) && s.at(i)!=LastDup){
            dup.push_back(s.at(i));
            LastDup=s.at(i);
        }
    }
    return dup;
}

int main()
{
    string s="Samereeccccaaabbbbbccccn";
    Str obj(s);
    vector<char> temp=obj.ReturnDuplicate();
    for(auto x:temp)
     cout<<x<<"\t";
}