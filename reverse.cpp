#include <iostream>
using namespace std;
int main ()
{
    cout<< "please put the value for get reverse no: ";
    int n;
    cin>>n;

    int revNo = 0;

    while (n){
        int unitDigit = n%10;
        revNo = revNo*10+unitDigit;
        n = n/10; 
    }
    cout<<revNo<<endl;

    cout<<"please put the value for get digit of sum: ";

    int m;
    cin>>m;

    int sum =0;

    while (m){
        int unitDigit = m%10;
        sum = sum+unitDigit;
        m = m/10;
    }
    cout<<sum<<endl;
}