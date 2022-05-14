#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float x, inc, z;

    cin>>x;

    if(x <= 400.00)
    {
        z = x*.15;
        inc = (x + z);
    }
    else if(x >= 400.01 && x <= 800.00)
    {
        z = x*.12;
        inc = (x + z);
    }
    else if(x >= 800.01 && x <= 1200.00)
    {
        z = x * .10;
        inc = (x + z);
    }
    else if(x >= 1200.01 && x <= 2000.00)
    {
        z = x * .07;
        inc = (x + z);
    }
    else if(x > 2000.00)
    {
        z = x * .04;
        inc = (x + z);
    }
    else{}
    cout<<setprecision(2)<<fixed<<"Novo salario: "<<inc<< endl;
    cout<<setprecision(2)<<fixed<<"Reajuste ganho: "<<z<< endl;
    cout<<setprecision(0)<<fixed<<"Em percentual: "<<z/x*100<<" %"<<endl;

    return 0;
}