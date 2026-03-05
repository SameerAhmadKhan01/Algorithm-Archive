#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
bool isAnagram(string s1,string s2)
{
    bool isAngrm=true;
    vector<int> H(26+1,0);
    for(int i=0;i<s1.length();i++)
    {
        H[s1.at(i)-65]+=1;
    }
    for(int i=0;i<s2.length();i++)
    {
        H[s2.at(i)-65]-=1;
        if(H[s2.at(i)-65]<0){
           isAngrm=false;
           break;
        }

    }
    return isAnagram;
}
int main()
{
    string s1="SAMEER";
    string s2="REEMAS";
    cout<<s1<<"  and   "<<s2<<"    are anagram : "<<boolalpha<<isAnagram(s1,s2);
}