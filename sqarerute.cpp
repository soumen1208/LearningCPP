#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int squareRoot =0;

    int i=1;

    while(i*i<n){
        i++;
    }
     if (i*i>n)
    i--;

    cout<<i;
}