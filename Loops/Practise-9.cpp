//9. Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

#include<iostream>

using namespace std;

int main()
{
    int num1 , num2 ,i=1 , gcd;

    cout<<"Enter the first number : "<<endl;
    cin>>num1;

    cout<<"Enter the second number : "<<endl;
    cin>>num2;

    for(i ; i<= num1 && i<=num2 ; i++)
    {
        if( num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    cout<<"So "<<gcd<<" is gcd"<<endl;
}
