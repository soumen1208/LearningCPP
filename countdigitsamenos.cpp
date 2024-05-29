#include <iostream>
using namespace std;

int countDigitsamenumbers(int n, int input)
{

   int count =0; 

   while (n != 0)
   {
    if (n%10==input)
    count++;

    n=n/10;
   }  

   return count;
}
int main()
{
    int N=10;
    int D=12;
    cout<<countDigitsamenumbers(N, D);

    return 0;
}