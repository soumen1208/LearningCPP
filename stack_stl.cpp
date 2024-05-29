#include <iostream>
#include<stack>
using namespace std;

void reverse (stack<int> &st)
{
    stack<int> tmpStack;

    while (!st.empty())
    {
        /* code */
        int exEle = st.top();
        st.pop();
        tmpStack.push(exEle);
    }

    st=tmpStack;
    
}

void display (stack<int> st)
{
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
}

void insertAtBottom (stack<int>&st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }

    int topEle = st.top();
    st.pop();
    insertAtBottom(st, ele);
    st.push(topEle);

}

void reverseRecursive (stack<int>&st)
{
    if (st.empty())
    {
        return;
    }

    //pop the top ele from stack 
    int topEle = st.top();
    st.pop();
    
    // reverse the remaining stack
    reverseRecursive(st);

    insertAtBottom(st, topEle);

}

  
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.top()<<endl;
    cout<<"the original element is: "<<endl;
    display(st);
    cout<<"reverse of the upper element: "<<endl;
    reverse(st);
    display(st);
    cout<<"others method for the reverse: "<<endl;
    reverseRecursive(st);
    display(st);

}