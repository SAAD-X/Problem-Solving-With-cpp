#include<iostream>

using namespace std;

int main()
{
    int i, j, flag=0, array_1[6]={1, 2, 3, 4, 5, 6};

    cout<<"Given Array is: "<<" ";
    for (int i = 0; i < 6; i++)
    {
        cout<<array_1[i]<<" ";
    }
    cout << " " << endl;
    cout<<"Unique Array: "<<endl;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (array_1[i] == array_1[j])
            {
                flag = 1;
                break;
            }
        }
        if (i == j)
        {
            cout<<array_1[i]<<" ";
        }
    }
    if (flag == 0)
    {
        cout << " " << endl;
        cout << "Array is already unique!" << endl;
    }
    return 0;
}