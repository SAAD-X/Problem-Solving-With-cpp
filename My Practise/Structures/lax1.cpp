#include<iostream>
using namespace std;

int main()
{
    struct
    {
        string name;
        int age;
    } lax;

    lax.name = "Rakin Sad Aftab";
    lax.age = 21;

    cout << lax.name << endl;
    cout << lax.age << endl;

    return 0;
}