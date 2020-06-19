/*#include<iostream>

using namespace std;

int main()
{
    int i , reminder;

    for( i = 2 ; i <= 100 ; i++)
    {
        cout<<i<<endl;
        reminder = i % 2 ;

        if( reminder == 0)
        {
            cout<<"Even"<<endl;
        }
        else
        {
            cout<<"Odd"<<endl;
        }
    }
}*/
#include<iostream>

using namespace std;

int main()
{
    int n , count = 0 , i ;

    cout<<"Enter any positive number : "<<endl;
    cin>>n;

    for(i = 2 ; i<n ; i++)
    {
        if(n % i == 0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"not Prime Number";
    }
}
