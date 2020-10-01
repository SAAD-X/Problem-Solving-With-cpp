//7. Write a program in C++ to find the factorial of a number.

#include<iostream>

using namespace std;

int main()
{
    int a= 1 , fac = 1 , num1;

    cout<<"Enter a integer value : "<<endl;
    cin>>num1;

    for(a ; a<= num1 ; a++)
    {
        fac = fac*a;
    }
    cout<<"ans is :"<<fac<<endl;
}
