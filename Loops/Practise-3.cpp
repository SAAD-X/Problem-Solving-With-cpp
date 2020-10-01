//3. Write a program in C++ to display n terms of natural number and their sum.
// n = 7 here.

#include<iostream>

using namespace std;

int main()
{
    int i , sum=0;

    for(i = 1 ; i<=7 ; i++)
    {
        cout<<i<<endl;

        sum += i;
    }
    cout<<"Total sum : "<<sum<<endl;
    return 0;
}
