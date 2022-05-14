#include<iostream>
using namespace std;

int main()
{
    int num, i, j, temp, low, store, l;
    cout<<"Enter the size of the array: ";
    cin>>num;

    int array[num];
    cout<<"Enter array elements: ";
    for(i = 0; i<num; i++)
    {
        cin>>array[i];
    }
    for(i = 0; i < num - 1; i++)
    {
        low = i;
        for(j = i+1; j < num; j++)
        {
            if(array[j] < array[low])
            {
                low = j;
            }
        }

        if(low != i)
        {
            swap(array[i], array[low]);
        }
    }

    cout<<"After Sorting: ";
    for(i = 0; i<num; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}