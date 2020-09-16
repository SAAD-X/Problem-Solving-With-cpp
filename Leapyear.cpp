#include<iostream>

using namespace std;

int main()

{
    int year, rem_4 ,rem_100 ,rem_400;

    cout<<"Enter the year"<<endl;
    cin>> year ;

    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;

    if ((rem_4 == 0 && rem_100 != 0) || (rem_400 == 0))
    {
        cout<<"This Year is Leap year"<<endl;
    }
    else
    {
        cout<<"This year is not Leap year"<<endl;
    }
    return 0;
}
