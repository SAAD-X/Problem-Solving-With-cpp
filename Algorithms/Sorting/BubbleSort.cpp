#include<iostream>
using namespace std;

int main ()
{
    int store, size;

    cout<<"Enter the size of an array: ";
    cin>>size;
    cout<<"Enter Elements: ";
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    for (int j = 1; j <= size-1; j++)
    {
        for (int i = 0; i <= size-2; i++)
        {
            if(array[i] > array[i+1])
            {
                store = array[i+1];
                array[i+1] = array[i];
                array[i] = store;
            }
        }
    }
    cout<<"After Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}

