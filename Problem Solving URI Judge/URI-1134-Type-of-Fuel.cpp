#include<iostream>
using namespace std;

int main()
{
    int x, count = 0, flag = 0, vv = 0;

    while(true)
    {
        cin>>x;
        if (x == 4)
        {
            break;
        }
        else if(x == 1)
        {
            count++;
        }
        else if(x == 2)
        {
            flag++;
        }
        else if(x == 3)
        {
            vv++;
        }
    }
    cout << "MUITO OBRIGADO"<<endl;
    cout << "Alcool: " << count << endl;
    cout << "Gasolina: " <<flag<< endl;
    cout << "Diesel: " << vv << endl;
    return 0;
}