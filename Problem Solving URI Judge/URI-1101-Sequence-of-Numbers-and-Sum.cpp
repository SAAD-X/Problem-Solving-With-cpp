#include<iostream>
using namespace std;

int main()
{
    int n, x, y, i, j, sum = 0;

    cin>>n;
    for (j = 1; j <= n; j++)
    {
        cin>>x>>y;
        if(x>y)
        {
            for (i = y+1, sum = 0; i < x; i++)
            {
                if(i%2 != 0)
                {
                    sum += i;
                }
            }
            cout << sum << endl;
        }
        if (x < y)
        {
            for (i = x + 1, sum = 0; i < y; i++)
            {
                if (i%2 != 0)
                {
                    sum += i;
                }
            }
            cout << sum << endl;
        }
        if (x == y)
        {
            sum = 0;
            cout << sum << endl;
        }
    }
    return 0;
}