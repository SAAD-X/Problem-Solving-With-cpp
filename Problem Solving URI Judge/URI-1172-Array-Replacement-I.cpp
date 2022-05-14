#include<iostream>
using namespace std;

int main()
{
    int X[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        cin>>X[i];
    }
    for (i = 0; i < 10; i++)
    {
        if(X[i] <= 0)
        {
            X[i] = 1;
        }
    }
    for (i = 0; i < 10; i++)
    {
        cout<<"X["<<i<<"] = "<<X[i]<<endl;
    }
    return 0;
}