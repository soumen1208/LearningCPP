#include <iostream>
using namespace std;
int main()

/*
   1 2 3 4 5
   1 2 3 4 *
   1 2 3 * * *
   1 2 * * * * *
   1 * * * * * * *

*/
{
     int n=5;

    for (int i =n; i>=1; i--){
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }   

    for (int i=0; i<n; i++){
        for (int j=0; j<n-i; j++){
            cout<<"  ";
        }
        for (int j=0; j<2*i+1; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }  

}
// #include <iostream>
// using namespace std;

// int main() {

//     int space, rows;

//     cout <<"Enter number of rows: ";
//     cin >> rows;

    // for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
    //     for(space = 1; space <= rows-i; ++space) {
    //         cout <<"  ";
    //     }

    //     while(k != 2*i-1) {
    //         cout << "* ";
    //         ++k;
    //     }
    //     cout << endl;
    // }    
//     return 0;
// }