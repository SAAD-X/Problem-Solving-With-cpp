#include<iostream>
using namespace std;

bool lax(string name)
{
    if(name == "lax")
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout<<lax("lax");

    return 0;
}