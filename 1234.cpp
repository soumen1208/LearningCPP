#include <iostream> 
using namespace std;
int main()
/*

   1
   2 3
   4 5 6
   7 8 9 10

*/
{
    int n;
    cin>>n;

    int number=1;

    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++){
            cout<<number;
            number++;
        }
        cout<<"\n";
    }
}