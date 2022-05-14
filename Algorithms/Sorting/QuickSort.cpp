#include <iostream>
using namespace std;

int Partition(int array[], int low, int high)
{
    int start = low, end = high;
    int key = array[high];

    while (start < end)
    {
        while (array[start] <= key)
        {
            start++;
        }

        while (array[end] > key)
        {
            end--;
        }

        if (start < end)
        {
            swap(array[start], array[end]);
        }
    }

    swap(array[low], array[end]);

    return end;
}

void QuickSort(int array[], int low, int high)
{
    int location;
    if (low < high)
    {
        location = Partition(array, low, high);
        QuickSort(array, low, (location - 1));
        QuickSort(array, (location + 1), high);
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    QuickSort(array, 0, size - 1);

    cout << "After Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}