#include<iostream>
using namespace std;

int main()
{
    float x, sum = 0, i;
    int v = 0;

    while (v < 2)
    {
        cin>>x;
        if(x >= 0 && x <= 10)
        {
            sum += x;
            v++;
        }
        else
        {
            cout<<"nota invalida"<<endl;
        }
    }
    cout << "media = " << sum / 2 << endl;
    return 0;
}