#include <iostream>
using namespace std;

class Stack
{
    public:
    int* arr;
    int top;
    int capacity;

    Stack(int cap)
    {
        capacity = cap;
        top=-1;
        arr=new int[capacity];
    }

    void push (int ele)
    {
        if (top == capacity-1)
        {
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top] = ele;

        // arr[++top] = ele;
    }

    void pop ()
    {
        if (top == -1)
        {
            cout<<"stack underflow, stack is already empty";
            return;
        }

        top--;
    }

    int gettop ()
    {
        if (top == -1)
        {
            cout<<"stack is empty";
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        if (top == -1)
        return true;

        return false;
    }

};

int main()
{
    Stack st(3);
    //cout<<st.capacity<<endl<<st.top;
    st.push(10);
    st.push(20);
    st.push(30);
    // cout<<st.gettop();
    // st.pop();
    // cout<<endl<<st.gettop();
    // st.pop();
    // cout<<endl<<st.gettop();
    // st.pop();
    
    while (!st.empty())
    {
        cout<<st.gettop()<<"\n";
        st.pop();
    }    
    
}