#include<iostream>
using namespace std;

int main()
{
    int N[10];
    int v, i;

    cin>>v;

    for (i = 0; i < 10; i++)
    {
        N[i] = v;
        cout<<"N["<<i<<"] = "<<v<<endl;
        v *= 2;
    }
    return 0;
}