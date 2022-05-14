//2. Write a program in C++ to find the sum of first 10 natural numbers.

#include<iostream>

using namespace std;

int main()
{
    int i , sum = 0;

    for(i = 1 ; i <=10 ; i++ )
    {
        cout<<i<<endl;

        sum += i;

    }
    cout<<"Total sum : "<<sum<<endl;
    
    return 0;
}
