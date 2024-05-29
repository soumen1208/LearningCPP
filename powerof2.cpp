#include <iostream>
using namespace std;

int powerof2 (int n)
{
    // base condition........
    if (n==1)
    return 2;

    int ans = 2* powerof2(n-1);
    return ans;
}

// others method of calculate the power

int power2 (int N)
{
    // base condition ...

    if (N==1)
    return 2;

    int halfPower = power2(N/2);
    int ans = halfPower*halfPower;

    return ans;
}

// WHEN A ODD NOS IN HOUSE....
int powerodd2(int m)
{
    // base function ........

    if (m==1)
    return 2;

    int halfpower = powerodd2(m/2);
    int ans = halfpower*halfpower;
     
    // code  for odd nos....... 
    if (m%2 != 0)
    ans = ans*2;

    return ans;
}
int main ()
{
    int n=4;
    cout<<powerof2(4)<<endl;
    
    int N=8;
    cout<<power2(N)<<endl;

    int m = 7;
    cout<<powerodd2(m);
}