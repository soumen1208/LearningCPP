#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;

    if (a>b && a>c){
        cout<<"the largest nos is: "<<a<<endl;
    }else if (b>a && b>c){
        cout<<"the largest nos is: "<<b<<endl;
    
    }else{
        cout<<"the largest nos is: "<<c<<endl;
    }

    return 0;
}