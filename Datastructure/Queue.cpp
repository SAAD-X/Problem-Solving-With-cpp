#include<iostream>
using namespace std;
int qu[100], maxsize = 100, front =-1, rear = -1;
bool isEmpty()
{
    if((front == -1) && (rear == -1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{
    if(rear == (maxsize -1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(int x)
{
    if(isFull())
    {
        cout<<"Queue is Full. Now die."<<endl;
    }
    else if(isEmpty())
    {
        front=rear=0;
        qu[rear] =x;
    }
    else
    {
        qu[rear++] = x;
    }
}

void dequeue()
{
    if (isEmpty())
    {
        cout<<"Queue is Empty! dequeue is Possible"<<endl;
    }
    else if(front == rear && front == -1)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}

void Show()
{
    if (isEmpty())
    {
        cout << "cannot show queue because it is empty!"<<endl;
    }
    else
    {
        for (int i = front; i < rear; i++)
        {
            cout<<qu[i]<<" "<<endl;
        }
    }
}
int main()
{
    enqueue(12);
    enqueue(14);
    enqueue(17);
    enqueue(3);
    enqueue(7);
    enqueue(23);
    enqueue(80);
    Show();
    cout<<endl;
    cout<<"After Dequeue:"<<endl;
    dequeue();
    dequeue();
    Show();

    return 0;
}