
#include <iostream>
using namespace std;

void Odd(int L, int R)
{
    cout<<"Starting Value: "<<L<<endl;
    cout<<"Ending Value: "<<R<<endl;
    cout << endl;
    for (int i = L; i <= R; i++)
    {
        if(i%2 != 0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    Odd(12, 23);
    return 0;
}