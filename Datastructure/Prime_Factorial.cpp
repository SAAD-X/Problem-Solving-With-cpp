#include <iostream>

using namespace std;

void factorial(int number)
{
    char check = 'y';
    while (check = 'Y' || 'N')
    {
        int x;
        bool isPrime;
        isPrime = true;
        int factorial = 1;
        cout<<"Enter any number: "<<endl;
        cin>>number;
        for (x = 2; x < number; x++)
        {
            if (number % x == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true)
        {
            for (int i = 1; i <= number; i++)
            {
                factorial = (factorial * i);
            }
            cout<<factorial<<endl;
        }
        else
            cout<<"Error! not a prime number."<< endl;
            cout<<"Do you want to try again? :y/n"<< endl;
            cin >> check;
            if (check == 'n')
            {
                cout<<"Okay bye!"<<endl;
                break;
            }
    }
}
int main()
{
    int number;
    factorial(number);
    return 0;
}