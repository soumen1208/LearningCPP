# include <iostream>
using namespace std;
int main ()
{
    int n=10;

    for (int i=0; i<n; i++){
        for (int j=0; j<n-i; j++){
            cout<<" ";
        }
        for (int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    /*

      *
      **
      ***
      ****
      *****

       print the left side triangle.......
    */

   int k =10;

   for (int i =0; i<k;  i++){
    for (int j=0; j<i; j++){
        cout<<"*";
    }
    cout<<"\n";
   }
    
}