#include<iostream>
using namespace std;

struct car
{
    string carname;
    string carmodel;
    int carprice;
    int version;
};

int main()
{
    car car1;

    car1.carname = "BMW";
    car1.carmodel = "X5";
    car1.carprice = 1000000;
    car1.version = 2019;

    cout<<car1.carname<<" "<<car1.carmodel<<" "<<car1.version<<endl;
    cout<<car1.carprice<<endl;

    cout<<""<<endl;

    car car2;

    car2.carname = "Toyota";
    car2.carmodel = "Corolla";
    car2.carprice = 500000;
    car2.version = 2018;

    cout<<car2.carname<<" "<<car2.carmodel<<" "<<car2.version<<endl;
    cout<<car2.carprice<<endl;

    return 0;
}