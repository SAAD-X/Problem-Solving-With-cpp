#include<iostream>
using namespace std;

int main()
{
    int n, i, x, y, j, sum =0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin>>x>>y;
        for (j = x, sum = 0; j < x + (y * 2); j++)
        {
            if(j%2 != 0)
            {
                sum +=j;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}