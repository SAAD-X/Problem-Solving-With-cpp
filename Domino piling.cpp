#include<iostream>
using namespace std;

int main()
{
    int M, N, S = 2;

    cin>>M>>N;

    if((M*N) % S == 0)
    {
        cout<<(M*N) / S;
    }
    else
    {
        cout<<(M*N) / S;
    }
}
