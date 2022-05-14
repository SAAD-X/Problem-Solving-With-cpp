#include<iostream>
using namespace std;

int main()
{
    int i, j, arr_size, temp;
    cout<<"Enter the size of the array: ";
    cin>>arr_size;
    int array[arr_size];
    cout<<"Enter elements: ";
    for(i = 0; i<arr_size; i++)
    {
        cin>>array[i];
    }

    for(i = 1; i<arr_size; i++)
    {
        temp = array[i];
        j = i - 1;

        while(j >= 0 && array[j] > temp)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }

    cout<<"After Sorting: ";
    for(i = 0; i< arr_size; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}