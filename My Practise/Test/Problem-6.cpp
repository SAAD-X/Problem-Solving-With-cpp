#include<iostream>
using namespace std;

int main()
{
    char x;
    cout<<"Enter anything: ";
    cin>>x;

    if(x == '+' || x == '-' || x == '*' || x == '/' || x == '^' || x == '%' || x == '&' || x == '$' || x == '#' || x == '@' || x == '!' || x == ',')
    {
        cout<<"Symbol"<<endl;
    }
    else if(x >= 'A' && x <= 'Z')
    {
        cout<<"Uppercase latter"<<endl;
    }
    else if(x >= 'a' && x <= 'z')
    {
        cout<<"Lowercase latter"<<endl;
    }
    else
    {
        cout<<"Digit"<<endl;
    }
    return 0;
}