#include <iostream>
using namespace std;

void printIncrease (int n)
{
    if (n==0)
    return;

// when print 1st n then its output is 
    cout<<n<<" ";
    printIncrease(n-1);
    cout<<endl<<n<<" ";

    


}
int main()
{
    int n=5;
    printIncrease(n);
}