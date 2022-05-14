#include<iostream>
using namespace std;

int main()
{
    int x, y, i, sum=0;
    cin>>x>>y;
    if(x<y)
    {
        for (i = x; i <= y; i++)
        {
            if(i % 13 != 0)
            {
                sum += i;
            }
        }
    }
    else
    {
        for (i = y; i <= x; i++)
        {
            if (i % 13 != 0)
            {
                sum += i;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}