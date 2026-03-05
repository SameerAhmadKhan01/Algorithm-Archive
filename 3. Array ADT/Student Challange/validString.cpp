#include<iostream>
#include<vector>
using namespace std;
int isValid(char s[]) //a string is valid when it has no special charactwr
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(!((s[i]>=65 &&  s[i]<=90 || s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57) || s[i]==' '))
        {
            return 0;
        }
        else continue;
    }
    return 1;
}


int main()
{
    char s[]="Sameer1 129";
    cout<<isValid(s);
}