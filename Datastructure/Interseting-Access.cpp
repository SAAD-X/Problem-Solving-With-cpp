#include<iostream>

using namespace std;

int main()
{
    int mimo[5] = {23,45,4,9
    ,12}, a, b, i;

    a = 2;
    mimo[2] = a + 1;
    mimo[a] = 3;
    b = mimo[a - 2] + 3;
    mimo[mimo[a]] = mimo[3] + b;

    for (i = 0; i < 5; i++)
    {
        cout<<mimo[i]<<endl;
    }
    return 0;
}