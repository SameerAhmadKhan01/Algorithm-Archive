#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s)
{
    int i=0,j=s.length()-1;
    bool flag=true;
    while(i<=j)
    {
        if(s.at(i)!=s.at(j))
        {
            flag=false;
            break;
        }
        i++;
        j--;
    }
    return flag;
}

int main(){
    cout<<boolalpha<<isPalindrome("SAMEER");
}