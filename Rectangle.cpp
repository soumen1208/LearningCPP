#include <iostream>
using namespace std;
int main()
{
    cout<<"put l: "<<endl;
    int l;
    cin>>l;
    cout<<"put w: "<<endl;
    int w;
    cin>>w;

    int area = l*w;
    int perimeter = 2*(l+w);

    cout<<"area of the rectangal is: "<<area<<endl;
    cout<<"perimeter of the rectangal is: "<<perimeter; 

    return 0;
}