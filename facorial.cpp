#include <iostream>
using namespace std;

int factorial (int n)
{
    // Base condition.......
    if (n==0)
    return 1;

    int ans = n *factorial(n-1);
    return ans;
    
}

// others method ........
int main()
{
    int n = 5;

    cout<<factorial(n);
    
}