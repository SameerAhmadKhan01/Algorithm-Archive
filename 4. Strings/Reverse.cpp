#include <iostream>
#include <string>
using namespace std;

struct Str {
    string s;
};

Str Reverse(Str a)
{
    Str rev;
    for (int i = a.s.length() - 1; i >= 0; i--)
    {
        rev.s += a.s.at(i);   // ← missing semicolon fixed
    }
    return rev;
}

int main()
{
    Str a;
    cout << "Enter a string : ";
    getline(cin, a.s);

    Str rev = Reverse(a);   // no pointer needed
    cout << rev.s;
}
