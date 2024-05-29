#include <iostream>
using namespace std;


void printMessage ()
{
    cout<<"hello world";
}

int addSum (int a, int b)
{
    int sum = a+b;

    // cout<<endl<<sum;        this is the other form of print .....
    return sum;
}

int maxNo (int a, int b)
{
    if (a>b)
    return a;
    return b;
}

int main()
{
    printMessage();

    cout<<endl<<addSum(5,6)<<endl;

    cout<<maxNo(10, 6);
    
    return 0;
}