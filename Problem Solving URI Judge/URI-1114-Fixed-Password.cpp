#include<iostream>
using namespace std;

int main()
{
    int x = 2002, y;
    while(true)
    {
        cin>>y;

        if(y == x)
        {
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else
        {
            cout<<"Senha Invalida"<<endl;
        }
    }
    return 0;
}