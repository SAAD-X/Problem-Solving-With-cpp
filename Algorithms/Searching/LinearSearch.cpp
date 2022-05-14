#include <iostream>
using namespace std;

int main()
{
    int count, i, num;

    cout<<"Enter the size of the array: ";
    cin>>count;
    int input[count];
    cout<<"Enter "<<count<<" numbers"<<endl;

    for(i = 0; i < count; i++)
    {
        cin>>input[i];
    }

    cout<<"Enter a number to search in Array:";
    cin>>num;

    for(i = 0; i < count; i++)
    {
        if(input[i] == num)
        {
            cout<<"Element found at index "<< i;
            break;
        }
    }

    if(i == count)
    {
        cout<<"Element Not found in the Array."<<endl;
    }

    return 0;
}
