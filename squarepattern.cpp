#include <iostream>
using namespace std;
int main()
{

    /*
           *********
           *********
           *********
           *********
           *********

           // print the square pattern.........
    */
    int n=5, m=9;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<"*";
        }

        cout<<endl;
    }

    // holow square pattern.....
    /*
       *******
       *     *
       *     *
       *     *
       *     *
       *     * 
       *******
    
    
    */

   int o=10 , p=9; 

   for (int i=0; i<o; i++){
    for (int j=0; j<p; j++)
    if (i==0 || i==o-1 || j==0 || j==p-1){
        cout<<"*";
    }else{
        cout<<" ";
    }
    cout<<endl;
   }

}