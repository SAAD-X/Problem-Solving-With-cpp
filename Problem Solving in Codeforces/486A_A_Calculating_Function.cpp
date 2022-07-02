#include<iostream>
using namespace std;

int main()
{
    long long n, m;
    cin>>n;

    if(n % 2 == 0)
    {
        m = n / 2;
        cout << m << endl;
    }
    else if (n % 2 != 0)
    {
        m = -((n/2)+1);
        cout << m << endl;
    }
    else
    {
        
    }
    return 0;
}