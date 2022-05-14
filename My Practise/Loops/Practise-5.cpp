//5. Write a program in C++ to check whether a number is prime or not.

#include<iostream>

using namespace std;

int main()
{
    int i;

    cout<<"Enter an integer value :"<<endl;
    cin>>i;

    if(i % 2 !=0)
    {
        cout<< i << " is a prime number"<<endl;
    }
    else
    {
        cout<<i<< " is not a prime number"<<endl;
    }
    return 0;
}
