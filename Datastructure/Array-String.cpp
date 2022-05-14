#include<iostream>
using namespace std;

int main()
{
    char question[] = "Please Enter First Name: ";
    char greeting[] = "Hello";
    char firstname[80];

    cout<<question<<endl;
    cin>> firstname;

    cout<<greeting<<", "<<firstname;

    return 0;
}