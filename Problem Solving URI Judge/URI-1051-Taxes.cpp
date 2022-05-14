#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float x, tax;
    
    cin>>x;

    if(x <= 2000.00)
    {
        cout<<"Isento"<<endl;
    }
    else if(x >= 2000.01 && x <= 3000.00)
    {
        tax =(x - 2000.01)* .08;
        cout<<setprecision(2)<<fixed<<"R$ "<<tax<<endl;
    }
    else if(x >= 3000.01 && x <= 4500.00)
    {
        tax = (999.99 * .08) + ((x - 3000.01)* .18);
        cout<<setprecision(2)<<fixed<<"R$ "<<tax<<endl;
    }
    else if(x > 4500)
    {
        tax = (999.99 * .08) + (1499.99 * .18) + ((x-4500.00)* .28);
        cout<<setprecision(2)<<fixed<<"R$ "<<tax<<endl;
    }
    else{}
    return 0;
}
