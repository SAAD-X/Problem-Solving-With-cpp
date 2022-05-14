#include<iostream>
using namespace std;

int main()
{
    float array[6];
    int count = 0, flag = 0;
    for (int i = 0; i < 6; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < 6; i++)
    {
        if ( array[i] > 0)
        {
            count++;
        }
        else if(array[i] < 0)
        {
            flag++;
        }
        else
        {
            cout<<endl;
        }
    }
    cout<<count<<" valores positivos"<<endl;

    return 0;
}