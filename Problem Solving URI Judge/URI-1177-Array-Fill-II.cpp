#include<iostream>
using namespace std;

int main()
{
    int N[1000];

    int x, y, z;

    cin>>x;

    for (y = 0, z = 0; y < 1000; y++)
    {
        cout<<"N["<<y<<"] = "<<z<<endl;
        z++;
        if(z==x)
        {
            z =0;
        }
    }
    return 0;
}