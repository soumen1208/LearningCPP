#include <iostream>
using namespace std;

void decOctal (int n)
{
    // array to store no...
    int octal[100];

    int i=0;
// counter for octal no array....
    while (n != 0)
    {
        // sorting remainder in octal array........
      octal[i]= n % 8;
      n=n/8;
      i++;
    }

    for (int j=i-1; j>=0; j--)
    {
       cout<<octal[j];       
    }
}


int main ()
{
    int n;     // 33        
    cin>>n;    // 41

    // function call..
    decOctal(n);

    return 0;
}