#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s = "SameerS";
    int checker = 0;


    for(char c : s)
    {
        c = tolower(c);          // FIX
        int bit = 1 << (c - 'a');

        if (checker & bit)
            cout << c << " is duplicate\n";
        else
            checker |= bit;
    }
}


