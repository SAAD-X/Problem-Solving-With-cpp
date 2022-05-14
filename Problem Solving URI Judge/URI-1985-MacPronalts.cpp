#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x, i, a, b;
    float sum = 0.0;

    cin>>x;

    for (i = 0; i < x; i++)
    {
        cin>>a>>b;

        if(a == 1001)
        {
            sum += (b*1.50);
        }
        else if(a == 1002)
        {
            sum += (b*2.50);
        }
        else if (a == 1003)
        {
            sum += (b * 3.50);
        }
        else if (a == 1004)
        {
            sum += (b * 4.50);
        }
        else if (a == 1005)
        {
            sum += (b * 5.50);
        }
    }
    cout <<setprecision(2)<<fixed<<sum<< endl;
    return 0;
}