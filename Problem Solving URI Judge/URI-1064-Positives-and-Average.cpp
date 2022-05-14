#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float x, i, count = 0, sum = 0;
    for (i = 0; i < 6; i++)
    {
        cin>>x;
        if(x > 0)
        {
            count++;
            sum += x;
        }
        else{}
    }
    cout << count << " valores positivos" << endl;
    cout<<setprecision(1)<<fixed<<sum/count<<endl;
    return 0;
}