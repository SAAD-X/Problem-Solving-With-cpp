#include<iostream>

using namespace std;

int st[10], maxsize = 10, top = 0, flag = 0;
bool isFull()
{
    if(top == maxsize)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty()
{
    if (top == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
void push(int e)
{
    if(isFull())
    {
        cout<<"Stack is full. Don't Push Second time."<<endl;
    }
    else
    {
        st[top++] = e;
    }
}

void pop()
{
    if (isEmpty())
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        st[top] = 0;
        top--;
    }
    
}

void show()
{
    int i = 0, j = 0;
    for (i = 0; i < top; i++)
    {
        cout<<st[i]<<" ";
    }
}

int main()
{
    push(12);
    push(14);
    push(17);
    push(3);
    push(7);
    push(23);
    show();
    cout<<endl;
    pop();
    pop();
    show();
    return 0;
}