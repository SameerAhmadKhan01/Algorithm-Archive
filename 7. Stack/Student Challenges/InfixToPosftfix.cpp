/*
Aim Of the Code :
This Program converts a given mathematical expression from Infix notation (e.g., a+b*c) to Postfix notation (e.g., abc*+) using the Stack Data Structure. 
but the operators are only :  "+,-,/,*"
*/



#include<iostream>
#include<cstring>
#include<stack>
using namespace std;


//this function returns the precendence of the operator 
int Precedence(char ch)
{
    if(ch=='+' || ch=='-' )
      return 1;
    else if(ch=='*' || ch=='/')
      return 2;
    else 
      return 0;
}


//to check if the given character is operator or not 
bool isOperand(char ch)
{
    if(ch=='/' || ch=='*' || ch=='+' || ch=='-')
      return false;
    else 
      return true;
}


//fn to convert to postfix
string PostFix(string infix)
{
    stack<char> st;
    int i=0;
    string postfix="";
    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
          postfix+=infix[i++];
        else {
          if(st.empty() || Precedence(infix[i]) > Precedence(st.top())) {
            st.push(infix[i++]);
           }
        else {
          postfix += st.top();
          st.pop();
        } 
      }
    }
    while(!st.empty()){
      postfix+=st.top();
      st.pop();
    }
    return postfix;
}

int main()
{
    string infix="a+b*c-d/e";
    cout<<PostFix(infix);
}