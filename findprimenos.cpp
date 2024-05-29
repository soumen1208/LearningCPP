#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int count =0;
    for (int i=2;i<n;i++){

        if (n%i==0){
            count++;
        }
    }

    if (count==2){
        cout<<"prime";
    }else{
        cout<<"not prime"<<"\n";
    }

    cout<<"Others type of code for get prime nos"<<"\n";

    // isPrime others code.....

    cout<<"put down a number: ";

    int m;
    cin>>m;

    bool isPrime = true;

    for (int i=2; i<m; i++){
        if (m%i==0){
            isPrime=false;
            break;
        }
    } 
    if (isPrime){
        cout<<"the nos is prime"<<"\n";
    }else{
        cout<<"nos is not prime"<<"\n";
    }

    // others variant to run the code...............



    int y;
    cin>>y;

    for (int i =2; i<=y; i++){
        bool isPrimme =true;

        for (int j =2; j<i; j++){

            if (i%j==0){
                isPrimme = false;
                break;
            }

        }
        if (isPrimme){
            cout<<i<<" ";
        }
    
    }

}