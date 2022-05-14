#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int X,Y;
    float price;
    cin>>X>>Y;

    if(X == 1)
    {
        price = Y * 4.00;
    }
    else if(X == 2)
    {
        price = Y * 4.50;
    }
    else if(X == 3)
    {
        price = Y * 5.00;
    }
    else if(X == 4)
    {
        price = Y * 2.00;
    }
    else
    {
        price = Y * 1.50;
    }
    cout<<"Total: R$ "<<setprecision(2)<<fixed<<price<<endl;
return 0;
}