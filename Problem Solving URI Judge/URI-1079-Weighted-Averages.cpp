#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float a, b, c;

    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        cin>>a>>b>>c;

        float med = ((a / 10) * 2) + ((b / 10) * 3) + ((c / 10) * 5);

        cout<<setprecision(1)<<fixed<<med<<endl;;
    }
    return 0;
}
