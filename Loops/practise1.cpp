/*#include<iostream>

using namespace std;

int main()
{
    int x;
    cout <<"Enter the value of i: "<<endl;
    cin >> x;

    while ( x < 5)
    {
        cout <<"Value of I is: "<< x <<endl;

        x++;
    }
    
}*/

#include<iostream>

using namespace std;

int main()
{
    int i , x;

    cout <<"Enter the value: "<< endl;
    cin >> i;

    cout <<"Enter the second velue: "<<endl;
    cin >> x;

    for (i ; i <= 5; i++)
    {
        if ( i == x)
        {
            cout<< "Sum is: "<< i+x <<endl;
        }
            cout << "value of I: " << i << endl;
    }
    
}