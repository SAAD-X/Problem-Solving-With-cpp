#include <iostream>
using namespace std;

void CountingSort(int inputarray[], int s, int r)
{
    int outputarray[s];
    int countarray[r];

    for (int i = 0; i < r; i++)
        countarray[i] = 0;

    for (int i = 0; i < s; i++)
        ++countarray[inputarray[i]];

    for (int i = 1; i < r; i++)
        countarray[i] = countarray[i] + countarray[i - 1];

    for (int i = 0; i < s; i++)
        outputarray[--countarray[inputarray[i]]] = inputarray[i];

    for (int i = 0; i < s; i++)
        inputarray[i] = outputarray[i];
}

int main()
{
    int size = 0;
    int range = 10;
    cout << "Enter Size of array: " << endl;
    cin >> size;
    int array[size];
    cout<<"Enter array elements within range: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Before Sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    CountingSort(array, size, range);
    cout << "After Sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}