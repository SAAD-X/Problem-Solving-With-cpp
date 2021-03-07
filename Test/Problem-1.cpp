#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int od;
    cout<<"Enter an odd number: "<<endl;
    cin>>od;
    if (od % 2 == 1)
    {
        double x = od;
        double z = x/2;
        double number = z;
        int integer = (int)number;
        double decimal = (10 * number - 10 * integer) / 10;
        cout<<"Integer Part: "<<integer<<endl;
        cout<<"Desimal Part: "<<decimal<<endl;
    }
    else
    {
        cout<<"Not an Odd number. Run again and Enter properly."<<endl;
    }
    return 0;
}