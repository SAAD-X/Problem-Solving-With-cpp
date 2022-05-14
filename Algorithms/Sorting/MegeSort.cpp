#include<iostream>
using namespace std;

void Merge(int array[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int store[100];

    while (i <= mid && j <= high)
    {
        if(array[i] < array[j])
        {
            store[k] = array[i];
            i++;
        }
        else
        {
            store[k] = array[j];
            j++;
        }
        k++;
    }
    if(i > mid)
    {
        while (j <= high)
        {
            store[k] = array[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            store[k] = array[i];
            i++;
            k++;
        }
    }

    for(k = low; k <= high; k++)
    {
        array[k] = store[k];
    }
}

void MergeSort(int array[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high)/2;

        MergeSort(array, low, mid);
        MergeSort(array, (mid + 1), high);

        Merge(array, low, mid, high);
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    cout<<"Enter array elements: ";
    for(int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    MergeSort(array, 0, size - 1);
    cout<<"After sorting: ";
    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}