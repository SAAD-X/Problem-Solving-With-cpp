/*#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Vehicle
{
private :
    float year_badget ;

protected :
    float price ;

public :
    string brand ;
    string model ;
    int year ;

    void setYearBadget(float yb)
    {
        year_badget = yb ;
    }
    float getYearBadget()
    {
        return  year_badget ;
    }
    void setPrice (float p)
    {
        price = p ;
    }
    float getPrice()
    {
        return  price ;
    }

};
int main()
{
    Vehicle car1 ;
    car1 . brand = "Jaguar";
    car1 . model = "X5";
    car1 . year  = 1800;
    car1 . setYearBadget(20000);
    car1 . setPrice(10000000);

    cout<<"BRAND NAME      : "<< car1 . brand           << endl;
    cout<<"MODEL NAME      : "<< car1 . model           << endl;
    cout<<"PUBLISHING YEAR : "<< car1 .  year           << endl;
    cout<<"YEAR BADGET     : "<< car1 . getYearBadget() << endl;
    cout<<"CAR PRICE       : "<< std :: setprecision(9) << car1 . getPrice()      << endl;

}*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Vehicle
{
private :
    string year_budget ;

protected :
    string price ;

public :
    string brand ;
    string model ;
    int year ;
        void setYearBadget(string yb)
    {
        year_budget = yb ;
    }
    string getYearBadget()
    {
        return  year_budget ;
    }
    void setPrice (string p)
    {
        price = p ;
    }
    string getPrice()
    {
        return  price ;
    }

};
class Car : public  Vehicle
{
private :
    string year_budget ;

protected :
    string price ;

public :
    string brand ;
    string model ;
    int year ;
    void setYearBudget(string yb)
    {
        year_budget = yb ;
    }
    string getYearBudget()
    {
        return  year_budget ;
    }
    void setPrice (string p)
    {
        price = p ;
    }
    string getPrice()
    {
        return  price ;
    }

};
int main()
{
    Car mycar   ;
    Vehicle myvehicle ;
    mycar . brand = "Jaguar";
    mycar . model = "X5";
    mycar . year  = 1800;
    mycar. setYearBudget("20000 tk only");
    myvehicle . setPrice("10000000 tk only");


    cout<<"BRAND NAME      : "<< mycar . brand           << endl;
    cout<<"MODEL NAME      : "<< mycar . model           << endl;
    cout<<"PUBLISHING YEAR : "<< mycar .  year           << endl;
    cout<<"YEAR BUDGET     : "<< mycar . getYearBudget() << endl;
    cout<<"CAR PRICE       : "<< std :: setprecision(9) << myvehicle . getPrice()      << endl;
}
