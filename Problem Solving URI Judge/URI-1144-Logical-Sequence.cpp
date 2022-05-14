#include<iostream>
using namespace std;
int main()
{
    int n, i, j;

    cin>>n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            if(j == 1)
            {
                cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
            }
            else
            {
                cout<<i<<" "<<(i*i)+1<<" "<<(i*i*i)+1<<endl;
            }
        }
    }
    return 0;
}