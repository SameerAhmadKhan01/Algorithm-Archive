#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    bool isOperand(char ch)
    {
      if(ch=='/' || ch=='*' || ch=='+' || ch=='-')
       return false;
      else 
       return true;
    }


    public:
     int evalPostfix(char *postfix)
     {
        stack<char> stk;
        int i , var1 , var2 , res;
        for(i=0;postfix[i]!='\0';i++)
        {
           if(isOperand(postfix[i]))
            stk.push(postfix[i]-'0');
           else{
            var2=stk.top(); stk.pop();
            var1=stk.top(); stk.pop();
            switch(postfix[i])
            {
                case '+':res=var1+var2; break;
                case '-':res=var1-var2; break;
                case '*':res=var1*var2; break;
                case '/':res=var1/var2; break; 
            }
            stk.push(res);
           }
        }
        return stk.top();
     }
};


int main() {
    Solution sol;
    
    char exp[] = "35*62/+4-"; 
    
    int result = sol.evalPostfix(exp);
    
    cout << "Postfix Expression: " << exp << endl;
    cout << "Result: " << result << endl;
    
    return 0;
}