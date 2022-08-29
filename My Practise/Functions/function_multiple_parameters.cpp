#include<iostream>
using namespace std;

void lax(int a, string b)
{
    for (int i = 0; i < a; i++)
    {
        cout<<i<<b<<endl;
    }
    
}

int main()
{
    lax(10, " Laxman");
    return 0;
}