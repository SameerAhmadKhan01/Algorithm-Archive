#include<bits/stdc++.h>
using namespace std;

//this program check wheather an expression is having perfect set of parenthesis or not 
// Note : The expression will only have '()' brackets

class Stack
{
    public:
      bool isValid(string s){
        stack<int> st;
        for(auto &ch:s){
            if(ch=='(')
              st.push(ch);
            else if(ch==')'){
                if(st.empty())
                 return false;
                else
                 st.pop();
            }
        }
        if(st.empty()) return true;
        else return false;
      }
};


int main(){
    Stack st;
    string exp1="((a+b)*(b+c)))";
    cout<<boolalpha<<exp1<<" is a perfect expression : "<<st.isValid(exp1)<<endl;
    return 0;
}