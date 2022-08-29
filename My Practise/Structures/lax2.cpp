#include<iostream>
using namespace std;

int main()
{
    struct
    {
        string carname;
        string carmodel;
        int carprice;
        int year;
    } car1, car2;

    car1.carname = "BMW";
    car1.carmodel = "X5";
    car1.carprice = 1000000;
    car1.year = 2019;

    car2.carname = "Toyota";
    car2.carmodel = "Corolla";
    car2.carprice = 500000;
    car2.year = 2018;

    cout <<"Car Name: "<<car1.carname << endl;
    cout <<"Car Model: "<<car1.carmodel << endl;
    cout <<"Car Price: "<<car1.carprice << endl;
    cout <<"Version: "<<car1.year << endl;
    
    cout<<""<<endl;

    cout <<"Car Name: "<<car2.carname << endl;
    cout <<"Car Model: "<<car2.carmodel << endl;
    cout <<"Car Price: "<<car2.carprice << endl;
    cout <<"Version: "<< car2.year << endl;

    return 0;
}