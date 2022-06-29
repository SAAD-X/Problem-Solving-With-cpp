#include<iostream>
using namespace std;

int main()
{
    int n, add = 0;
    string s;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if(s[1] == '+')
        {
            add++;
        }
        else
        {
            add--;
        }
    }

    cout<<add<<endl;
    return 0;
}