// #include <iostream> 
// using namespace std;
// int main()
// {
//     int n=5;

//     for (int i=1; i<=n; i++)
//     {
//         for (int j=1; j>0; j--)
//         {
//             cout<<" "<<i;
//         }
        
//     }
//     cout<<endl;

//     for (int i=1; i<=n-1; i++)
//     {
//         for (int j=2; j>1; j--)
//         {
//             cout<<" "<<i;
//         }
//     }
//     cout<<" *";
//     cout<<endl;

//     for (int i=1; i<=n-2; i++)
//     {
//         for (int j=3; j>2; j--)
//         {
//             cout<<" "<<i;
//         }
//     }
//     cout<<" * * *";
//     cout<<endl;

//     for (int i=1; i<=n-3; i++)
//     {
//         for (int j=4; j>3; j--)
//         {
//             cout<<" "<<i;
//         }
//     }
//     cout<<" * * * * *";
//     cout<<endl;

//     for (int i=1; i<=n-4; i++)
//     {
//         for (int j=n; j>4; j--)
//         {
//             cout<<" "<<i;
//         }
//     }

//     cout<<" * * * * * * *";
//     cout<<endl;
    
// }





#include <iostream>
using namespace std;
int main()
{
    int n=5;

    for (int i=n; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            cout<<j;
        }

        for (int j=n; j<n+7; j++)
        {
            if (i==n-1)
            cout<<"*";

            else if(j==n)
            cout<<"+";
        }

        cout<<endl;
    }
}