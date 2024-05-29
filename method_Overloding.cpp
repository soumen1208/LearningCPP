#include <iostream>
using namespace std;

int add (int x, int y)
{
    return x+y;
}

int add (int x, int y, int z)
{
    return x+y+z;
}

float add (float i, float j)
{
    return i+j;
}
int main()
{
    int a=10, b=20;
    float c=12.4f, d=23.8f;

    cout<<add(a,b)<<endl;
    cout<<add(10,20,30)<<endl;
    cout<<add(c,d)<<endl;
}