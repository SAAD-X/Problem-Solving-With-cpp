#include<iostream>
using namespace std;

int main()
{
    float x, y;

    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;

    if(x > 0 && y > 0)
    {
        cout<<"1st quadrant"<<endl;
    }
    else if(x < 0 && y > 0)
    {
        cout<<"2nd quadrant"<<endl;
    }
    else if(x < 0 && y < 0)
    {
        cout<<"3rd quadrant"<<endl;
    }
    else if(x > 0 && y < 0)
    {
        cout<<"4th quadrant"<<endl;
    }
    else if( x == 0 && y == 0)
    {
        cout<<"Origin"<<endl;
    }
    else if(x < 0 && y == 0)
    {
        cout<<"x-axsis"<<endl;
    }
    else
    {
        cout<<"y-axsis"<<endl;
    }
    return 0;
}