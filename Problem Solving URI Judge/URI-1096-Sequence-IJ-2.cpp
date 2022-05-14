#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 10; i++)
    {
        if(i%2 != 0)
        {
            for (int j = 7; j > 4; j--)
            {
                cout<<"I="<<i<<" "<<"J="<<j<<endl;
            }
        }
        else
        {
            
        }
    }
    return 0;
}