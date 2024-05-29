// #include <iostream>
// using namespace std;
// int main()
// {
//     int rows, count = 0, count1 = 0, k = 0;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     for(int i = 1; i <= rows; ++i)
//     {
//         for(int space = 1; space <= rows-i; ++space)
//         {
//             cout << "  ";
//             ++count;
//         }
//         while(k != 2*i-1)
//         {
//             if (count <= rows-1)
//             {
//                 cout << i+k << " ";
//                 ++count;
//             }
//             else
//             {
//                 ++count1;
//                 cout << i+k-2*count1 << " ";
//             }
//             ++k;
//         }
//         count1 = count = k = 0;
//         cout << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    int n, count =0, count1=0, k=0;
    cin>>n;

    for (int i = 1; i<=n; ++i)
    {
        for (int j = 1; j<=n-i; ++j)
        {
            cout<<"  ";
            ++count;
        }

        while (k != 2*i-1)
        {
            if (count <= n-1)
            {
                cout<<i+k<<" ";
                ++count;
            }

            else 
            {
                ++count1;
                cout<<i+k-2*count1 <<" ";
            }
            ++k;
        }

        count1 = count = k  =0;
        cout<<endl;
    }

    return 0;


}