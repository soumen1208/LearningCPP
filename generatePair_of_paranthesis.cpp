#include <iostream>
using namespace std;

void generateParanthesis (int open, int closed, int n, string ans)
{
    // base condiiton ........
    if (open==closed && open==n)
    {
        cout<<ans<<endl;
        return;
    }

    // logic for making healthy paranthesis.. 
     if (closed<open)
    {
        generateParanthesis(open, closed+1, n, ans+')');
    }

    if (open<n)
    {
        generateParanthesis(open+1, closed, n, ans+'(');
    }

   
}
int main()
{
    int  n;
    cin>>n;

    generateParanthesis (0, 0 , n, "");
}