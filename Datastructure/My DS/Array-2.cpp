#include<iostream>
using namespace std;

int main()
{
    int x, counteven=0, countodd=0;
    int arr[10], evenarr[10], oddarr[10];

    cout<<"Enter the size of the array: "<<endl;
    cin>>x;

    for (int  i = 0; i < x; i++)
    {
        cin>>arr[i];
        if (arr[i] % 2 == 0)
        {
            evenarr[i] = arr[i];
            counteven++;
        }
        else
        {
            oddarr[i] = arr[i];
            countodd++;
        }
    }

    for (int i = 0; i < x; i++)
    {
        cout<<"Even Numbers are: "<<evenarr[i]<<" "<<endl;
    }
    cout << "Total Even Numbers: " << counteven << endl;

    for (int i = 0; i < x; i++)
    {
        cout<<"Odd Numbers are: "<<oddarr[i]<<" "<<endl;
    }
    cout<<"Total Odd Numbers: "<<countodd<<endl;

    return 0;
}