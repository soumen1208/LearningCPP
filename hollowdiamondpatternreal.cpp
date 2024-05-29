#include <iostream>
using namespace std;
int main()
{
    int n=5;

    for (int i=0; i<n; i++)
    {
        // for print *...
        for (int j =0; j<n-i; j++)
        {
            cout<<"*";
        }

        // for print space.......

        for (int j=0; j<2*i-1; j++)
        {
            cout<<" ";
        }

        // for print * ..........

        for (int j=n; j>i; j--)
        {

            if (j==1)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;

    }

    // for down side .......

    for (int i=1; i<n; i++)
    {

        // for print star......
         for (int j=0; j<i+1; j++)
        {
            cout<<"*";
        }

        // for print space...

        for (int j=0; j<2*(n-i)-3; j++)
        {
            cout<<" ";
        }

        for (int j=0; j<=i; j++)
        {
            if (j==4)
            cout<<" ";
            else 
            cout<<"*";
        }

        cout<<"\n";

    }

    return 0;
}