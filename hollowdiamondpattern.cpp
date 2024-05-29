#include <iostream>
using namespace std;
int main()
{
    int n =5;

    for (int i=0; i<1; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"* ";

        }

        cout<<endl;

        for (int j=0;j<n; j++ )
        {
            if(j==2)
            {
                cout<<"  ";
            }else{
                cout<<"* ";
            }
        }

        cout<<endl;

        for (int j=0; j<n; j++)
        {
            if (j==1 || j==2 || j==n-2)
            {
                cout<<"  ";
            }else{
                cout<<"* ";
            }
        }

        cout<<endl;

        for (int j=0;j<n; j++ )
        {
            if(j==2)
            {
                cout<<"  ";
            }else{
                cout<<"* ";
            }
        }

        cout<<endl;

        for (int j=0; j<n; j++)
        {
            cout<<"* ";

        }

        cout<<endl;

    }
}