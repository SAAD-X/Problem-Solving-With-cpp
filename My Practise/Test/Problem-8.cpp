#include <iostream>
using namespace std;
int main()
{
    float a, b, c;

    cout << "Enter The Value Of a,b,c :"<<endl;
    cin >> a >> b >> c;

    if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
    {
        cout<<"Right triangle"<<endl;
    }
    else
    {
        cout<<"Not a right triangle"<<endl;
    }
    return 0;
}
