#include <iostream>
#include<queue>
using namespace std;

void display (queue<int>q)
{
    while (!q.empty())
    {
        /* code */
        cout<<q.front()<<endl;
        q.pop();
    }
    
}
int main()
{
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // q.pop();
    // cout<<q.front();

    display(q);
}