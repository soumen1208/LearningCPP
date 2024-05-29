#include<iostream>
#include <stack>
using namespace std;

bool isParenthesis (string str)
{
    stack<int>st;

    for (int i=0; i<str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[' )
        {
            st.push(str[i]);
        }else if (str[i] == ')')
        {
            if (st.empty() || st.top() != '(')
            return false;

            st.pop();
        }
        else if (str[i] == '}')
        {
            if (st.empty() || st.top() != '{')
            return false;

            st.pop();
        }
        else if (str[i] == ']')
        {
            if (st.empty() || st.top() != '[')
            return false;

            st.pop();
        }
    }
    
    if (st.empty())
    return true;

    return false;
}
int main()
{
    string str = "{()}[]{";

    if (isParenthesis(str))
    cout<<"balanced";
    else
    cout<<"unbalanced";
}