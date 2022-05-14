#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, i;

    cin>>n;
    for ( i = 0; i < n; i++)
    {
        float x, y;
        cin>>x>>y;
        if (y == 0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else if (x == 0)
        {
            x / y;
            cout<<setprecision(1)<<fixed<<x/y<<endl;
        }
        else if (x/y)
        {
            cout<<setprecision(1)<<fixed<<x/y<<endl;
        }
    }
    return 0;
}