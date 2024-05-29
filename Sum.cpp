#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    int sum =0;

    while(i<n)
    {
        int number;
        cin>>number;
        
        sum =sum+number;
        i++;
        
    }
    cout<<"sum is: "<<sum<<"\n";

    return 0;
}