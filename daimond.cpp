#include <iostream>
using namespace std;
int main()
{
    int n=5;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<=n-1; j++)
        {
            if (i==2 || j==2)
            cout<<"* ";
            else if (i==0 || i==n-1 || j==0 || j==n-1)
            cout<<"  ";
            else if (i==1 || i==3 || j==1 || j==3)
            cout<<"* ";
            else
            cout<<"  ";
        }

        cout<<"\n";
    }
}
