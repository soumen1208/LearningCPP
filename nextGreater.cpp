#include<iostream>
#include <stack>
using namespace std;
void nextGreater (int arr[], int ans[], int n)
{
   

    for (int i=0; i<n; i++)
    {
        // fixed the current element
        // llok up int the right of the ith element.....
        // I think assumpsion the ans is not found
        bool nextGreaterNotFFound = true;
        for (int j=i+1; j<n; j++)
        {
            if (arr[j]>arr[i])
            {
                ans[i] = arr[j];
                nextGreaterNotFFound = false;
                break;        
            }
        }

        if (nextGreaterNotFFound)
        ans[i] = -1;
    }
    
}

void nextGreaterUsingStack (int arr[], int ans[], int n)
{
    stack<int>st;

    for (int i=n-1; i>=0; i--)
    {
        while (!st.empty() && arr[i]>=st.top())
        {
            /* code */
            st.pop();
        }

        // ans[i] = st.push();

        if (st.empty())
        ans[i] = -1;

        else
        ans[i] = st.top();


        st.push(arr[i]);
        
    }
    
}
int main()
{
    int arr[] = {6, 8, 0, 1, 3};
    //int n = sizeof(arr)/sizeof(arr[0]);
    int n =5;
    int ans[n];

    //nextGreater(arr,ans, n);
    nextGreaterUsingStack(arr, ans, n);

    for (int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }

}