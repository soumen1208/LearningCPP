#include <iostream>
using namespace std;
int main ()
{
    int n=5;

    for (int i=0; i<n-2; i++){
        for (int j =0; j<n-i; j++){
            cout<<"  ";
        }

        for (int j =0; j<2*i+1; j++){   // for print star               
            cout<<"* ";
        }

        cout<<"\n";
    }
         // 2nd half of mirror star ...............

    for (int i=3; i<n; i++){
        for(int j=-1; j<i; j++){
            cout<<"  ";
        }
        for (int j=0; j<2*(n-i)-1; j++ ){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}