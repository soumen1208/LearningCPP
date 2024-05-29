#include<iostream>
using namespace std;

class Pair
{
    public:

    int diameter;
    int height;
};

Pair myFunction()
{
    Pair p;
    p.diameter = 10;
    p.height = 5;

    return p;
}
int main()
{
    Pair ans = myFunction();
    cout<<ans.diameter<<endl<<ans.height;
}