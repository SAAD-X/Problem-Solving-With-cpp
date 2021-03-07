#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout<<"Enter starting value: "<<endl;
    cin>>x;

    cout<<"Enter ending value: "<<endl;
    cin>>y;
    cout << "Enter to check: " << endl;
    cin >> z;
    if(z >= x && z < y)
    {
        if(z % 5 == 0 && z % 2 != 0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"Enter in range"<<endl;
    }
    return 0;
}