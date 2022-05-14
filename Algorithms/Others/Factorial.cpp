#include <iostream>
using namespace std;
int main()
{
    int n, f = 1;
    cout<<"Please enter the number : ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    cout<<endl;
    cout<<"Factorial of the number is : " << f << endl;
}