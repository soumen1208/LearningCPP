/*
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for (int i=0; i<n-4; i++){
        for (int j=0; j<5; j++){
            cout<<j+1<<" ";
        }
        cout<<"\n";
    }
    for (int i=0; i<n-4; i++){
        for (int j=0; j<2; j++){
            cout<<"2"<<" ";
        }
        for (int j=2; j<5; j++){
            cout<<j+1<<" ";
        }
        cout<<"\n";
    }
        for (int i=0; i<n-4; i++){
            for (int j=0; j<3; j++){
                cout<<"3"<<" ";
            }
             for (int j=3; j<5; j++){
                    cout<<j+1<<" ";
                }
            cout<<endl;
        }
        for (int i =0; i<n-4; i++){
            for (int j=0; j<4; j++){
                cout<<"4"<<" ";
            }
            for (int j=4; j<5;j++){
                cout<<j+1<<" ";
            }
            cout<<"\n";
        }
        for (int i=0; i<n-4; i++){
            for (int j=0; j<5; j++){
                cout<<"5"<<" ";
            }
            cout<<"\n";
        }
    return 0;
}