#include <iostream>
using namespace std;

class CircularQueue
{

    int* arr;
    int front;
    int rear;
    int size;
    int capacity;

    public:

    CircularQueue (int cap)
    {
        arr= new int [cap];
        front =0;
        rear = cap -1;
        size = 0;
        capacity = cap;
    }

    void push (int ele)
    {
        if (size == capacity)
        {
            cout<<"overflow";
            return;
        }

        rear = (rear+1)%capacity;
        arr[rear] = ele;
        size++;
    }

    void pop ()
    {
        if (size == 0)
        {
            cout<<"Underflow";
            return;
        }

        front = (front+1)%capacity;
        size--;
    } 

    bool empty ()
    {
        // if (size == 0)
        // return true;

        // return false;


        return size == 0;
        
        // TERNARY OPERATOR..........
        //return (size == 0) ? true : false ;
    }

    bool isFull ()
    {
        return size == capacity;
    }

    int Getfront()
    {
        return arr[front];
    }

};

void display (CircularQueue Q) //  pass by value..
{
    while (!Q.empty())
    {
        /* code */
        cout<<Q.Getfront()<<endl;
        Q.pop();
    }
    
}

int main()
{
    CircularQueue Q (5);
    // cout<<Q.front<<endl;
    // cout<<Q. rear<<endl;
    // cout<<Q.size<<endl;
    // cout<<Q.capacity<<endl;

    // cout<<Q.empty();
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    Q.push(50);

    // cout<<Q.Getfront()<<endl;
    Q.pop();
    //cout<<Q.Getfront()<<endl; 

    Q.push(100);
    

    // display.....................
    // while (!Q.empty())
    // {
    //     /* code */
    //     cout<<Q.Getfront()<<endl;
    //     Q.pop();
    // }

    display(Q);

    cout<<Q.empty();
    
}