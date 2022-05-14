#include<iostream>
using namespace std;

int main()
{
    int x, y, z, i, j;
    while (true)
    {
        cin>>x>>y;
        if(x>y)
        {
            cout<<"Decrescente"<<endl;
        }
        else if(x<y)
        {
            cout<<"Crescente"<<endl;
        }
        else if(x == y)
        {
            break;
        }
    }
    return 0;
}