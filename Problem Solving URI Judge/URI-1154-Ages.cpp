#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b=0;

    float c,d=0;

    while(true)
    {
        cin>>a;

        if(a<0)
        {
            break;
        }
        else
        {
            b +=a;
            d++;
        }
    }
    c = b/d;
    cout<<setprecision(2)<<fixed<<c<<endl;
    return 0;
}