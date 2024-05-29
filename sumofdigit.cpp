#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum =0;

    while(n)
    {
        int unitDigit = n%10;
        sum = sum+unitDigit;
        n = n/10;
    }
    cout<<"sum of digit is: "<<sum<<"\n";
    return 0;
}