#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    string s="10";
    int dec=0;
    for(int i=0;i<s.length();i++){
        int p=(s.at(i)-'0')*pow(2,i);
        dec+=p;
    }
    cout<<dec;
}