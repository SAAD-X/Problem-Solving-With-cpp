#include <iostream>
using namespace std;
int main ()
{
    int i, num, low, high, mid;
    cout<<"Enter the size of the array: ";
    cin>>num;
    cout<<"Enter elements: ";
    int array[num];
    for (i = 0; i < num; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter Element to be Search: ";
    cin >> num;
    low = 0;
    high = num-1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (array[mid] < num)
        {
            low = mid + 1;
        }
        else if (array[mid] == num)
        {
            cout<<"Searched element, "<<num<<" found at Position "<<mid + 1;
            break;
        }
        else
        {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }
    if (low > high)
    {
        cout<<"Searched element, "<<num<<" is not found in the Array.";
    }
    return 0;
}

