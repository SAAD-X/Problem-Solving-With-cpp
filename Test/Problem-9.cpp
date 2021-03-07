#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout<<"Input first side: "<<endl;
    cin>>a;

    cout<<"Input second side: "<<endl;
    cin>>b;

    cout<<"Third side: "<<endl;
    cin >> c;
    
    if(a == b && b == c && c == a)
    {
        cout<<"The Triangle is Equilateral"<<endl;
    }
    else if(a == b || b == c || c == a)
    {
        cout<<"The Triangle is Isosceles"<<endl;
    }
    else
    {
        cout<<"The Triangle Scalene angled"<<endl;;
    }
    return 0;
}