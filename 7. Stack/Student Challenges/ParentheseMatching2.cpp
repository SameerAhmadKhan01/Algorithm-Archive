#include<iostream>
#include<stack>
using namespace std;


//in this problem the expression will consist of different types of bracket 
class Stack
{
  public:
   bool isValid(string s)
{
    stack<char> st;
    for(auto &ch : s)
    {
        if(ch == '[' || ch == '(' || ch == '{')
        {
            st.push(ch);
        }
        else if(ch == ']' || ch == ')' || ch == '}')
        {
            if(st.empty()) return false;
            
            if((ch == ')' && st.top() == '(') ||
               (ch == '}' && st.top() == '{') ||
               (ch == ']' && st.top() == '['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}
};



int main(){
    Stack st;
    string exp = "{([a+b] * [c-d])/e}";
    cout<<boolalpha<<"Valid Parenthesis : "<<st.isValid(exp)<<endl;
}

