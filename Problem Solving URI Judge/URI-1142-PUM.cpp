#include<iostream>
using namespace std;

int main()
{
    int n, a, b, c = 1, d = 4;

    cin>>n;
    for (a = 1; a <= n; a++)
    {
        for (b = c; b <= d; b++)
        {
            if (b % 4 == 0)
                printf("PUM\n");
            else
                printf("%d ", b);
        }
        c += 4;
        d += 4;
    }
    return 0;
}