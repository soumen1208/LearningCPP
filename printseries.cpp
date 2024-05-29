#include <iostream>
using namespace std;

int printSeries3nplus1 (int N, int M )
{



   for (int i=1; N>0; i++)
   {
    int x=(3*i)+2;
        if (x % M != 0)
        {
            cout<<x<<endl;
            N--;
        }

    }
}

int main()

{
        int n, m;
        cin>>n>>m;
    printSeries3nplus1(n,m);

    return 0;
}
