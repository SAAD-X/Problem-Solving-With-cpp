#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n;

    if(n % 2 == 0)
    {
        m = n / 2;
    }
    else
    {
        m = ((n + 1) / 2) * (-1);
    }
     cout<<m<<endl;
    return 0;
}