#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
   string s="   fly me   to   the moon  ";
   int len = 0;
    int i = s.length() - 1;

    // skip trailing spaces
    while (i >= 0 && s[i] == ' ')
        i--;

    // count last word length
    while (i >= 0 && s[i] != ' ')
    {
        len++;
        i--;
    }

    cout << len;
}