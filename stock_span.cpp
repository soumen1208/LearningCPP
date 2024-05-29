#include <iostream>
#include <stack>
using namespace std;

void stockSpan (int prices[], int n)
{
    stack<int>st;

    int span[n]; // store final ans in thi arry
    
    for (int i=0; i<n; i++)
    {
        while (!st.empty() && prices[i]>= prices[st.top()])
        {
            st.pop();
        }

        if (st.empty())
        span[i] = i+1;
        else
        span[i] = i-st.top();

        st.push(i);
        
    }

     for (int i=0; i<n; i++)
    {
        cout<<span[i]<<" ";
    }


}
int main()
{
    int prices[] = {85, 80, 100, 60, 60, 60, 65};
    int n=7;
    
    stockSpan(prices, n);
}