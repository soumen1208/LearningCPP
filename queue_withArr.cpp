#include<iostream>
using namespace std;

class Queue
{
    int* arr;
    int front;
    int rear;
    int capacity;

    public:

    Queue (int cap)
    {
        arr= new int [cap];
        front = -1;
        rear = -1;
        capacity = cap;

    }  

    void enqueue (int ele)
    {
        // when queue is empty .....
        if (front == -1 && rear == -1)
        {
            front ++;
            rear ++;
            arr[rear] = ele;

            return;

        }
        else if (rear == capacity -1)
        {
            cout<<"over flow";
            return;
        }
        else
        {
        arr[++rear] = ele;
        }
    }  

    void dequeue ()
    {
        if (front == -1 && rear == -1)
        {
            cout<<"under flow";
            return;
        }

        front++; // deletion
        if (front>rear)
        {
            // reset queue to initial state........
            front = -1;
            rear = -1;
        }
    }

    int getFront ()
    {
        return arr[front];
    }

    bool empty ()
    {
        if (front == -1 && rear == -1)
        return true;

        return false;
    }

    
};

int main()
{
    Queue q1(4);

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);

    // cout<<q1.getFront()<<endl;
    // q1.dequeue();
    // cout<<q1.getFront()<<endl;
    // q1.dequeue();
    // cout<<q1.getFront()<<endl;
    // q1.dequeue();
    // cout<<q1.getFront()<<endl;
    // q1.dequeue();
    // cout<<q1.getFront()<<endl;
    // q1.dequeue();

    while(!q1.empty())
    {
        cout<<q1.getFront()<<endl;
        q1.dequeue();
    }

}