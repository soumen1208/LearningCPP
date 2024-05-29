#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Stack 
{
    vector<T>v;

    public:

    void push (T ele)
    {
        v.push_back(ele);
    }

    void pop ()
    {
        v.pop_back();
    }

    T top ()
    {
        // return the last ele of vector;
        return v[v.size()-1]; 
    }

    bool empty ()
    {
        if (v.size() == 0)
        {
            return true;
        }

        return false;
    }

    void display ()
    {
        for (int i=v.size() -1; i>=0; i--)
        cout<<v[i]<<endl;
    }

};

void display (Stack<int> st)
{
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main()
{
    Stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    // cout<<st.top()<<"\n";

//     while (!st.empty())
//     {
//         cout<<st.top()<<"\n";
//         st.pop();
//     }

    st.display();
    display(st);

    Stack<char> ch;
    ch.push('A');
    ch.push('B');
    ch.push('C');

    ch.display();
    

}