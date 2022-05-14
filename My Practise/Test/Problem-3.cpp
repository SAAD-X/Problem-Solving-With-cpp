#include <iostream>
using namespace std;

int main()
{

    int inputMinutes;
    double decimalMinutes;
    cout << "Enter number of minutes: ";
    cin >> decimalMinutes;

    inputMinutes = decimalMinutes;

    int days = inputMinutes / 1440;
    inputMinutes = inputMinutes % 1440;

    int week, a;
    a = days % 365;
    week = a/7;
    int hours = inputMinutes / 60;
    int mins = inputMinutes % 60;

    cout <<week<<" weeks "<< days << " days " << hours << " hours " << mins << " minutes "<<endl;

    return 0;
}