#include<iostream>
using namespace std;

void Rotate(int arr[], int d, int n)
{
    int temp[n];
    int k = 0;

    for(int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for(int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    
}

void secondRotate(int arr2[], int d, int m)
{
    int temp2[m];
    int k = 0;

    for (int i = d; i < m; i++)
    {
        temp2[k] = arr2[i];
        k++;
    }

    for (int i = 0; i < d; i++)
    {
        temp2[k] = arr2[i];
        k++;
    }

    for (int i = 0; i < m; i++)
    {
        arr2[i] = temp2[i];
    }
}

void PrintArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}

void PrintSecondArray(int arr2[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
}

int main()
{
    int arr[7], arr2[8];
    int d = 3;
    cout<<"Enter An Array: "<<endl;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 8; i++)
    {
        cin >> arr2[i];
    }Close visual studio code
    
    int N = sizeof(arr) / sizeof(arr[0]);
    int M = sizeof(arr2) / sizeof(arr2[0]);

    Rotate(arr, d, N);
    secondRotate(arr2, d, M);

    PrintArray(arr, N);
    PrintSecondArray(arr2, M);

    return 0;
}