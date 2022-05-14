#include <iostream>
using namespace std;
int main()
{
    char check = 'y';
    while (check = 'Y' || 'N')
    {
        int x, number;
        bool isPrime;
        isPrime = true;
        cout << "Enter number: " << endl;
        cin >> number;

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
            cout << number << " is a prime number" << endl;
        }

        else
        cout << number <<" its not a prime number" << endl;
        cout <<"Do you want to try again? :y/n"<< endl;
        cin >> check;

        if(check == 'n')
        {
            cout<<"Okay bye!"<<endl;
            break;
        }
    }
}