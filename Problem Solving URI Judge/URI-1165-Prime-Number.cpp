#include<iostream>
using namespace std;

int main()
{
    int n, x, i, j, p = 0;
    cin>>n;

    for (i = 0; i < n; i++)
    {
        cin>>x;
        

        for (j = 1, p = 0; j < x; j++)
        {
            if(x%j  == 0)
            {
                p += j;
            }
        }
        if(p == 1)
        {
            cout<<x<<" eh primo"<<endl;
        }
        else
        {
            cout<<x<<" nao eh primo"<<endl;
        }
    }
    return 0;
}