#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s)
{
    int i=0,j=s.length()-1;
    bool flag=true; // pre assuming that string is sorted
    while(i<=j)
    {
        if(s.at(i++)!=s.at(j--))
        {
            flag=false;
            break;
        }
    }
    return flag;
}

int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    cout<<"Palindrome : "<<boolalpha<<isPalindrome(s);
}