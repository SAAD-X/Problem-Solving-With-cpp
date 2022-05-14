#include<iostream>
using namespace std;

string encode(string s, int j)
{
    for (int i = j; i < s.length(); i=i+3)
    {
        s[i] = s[i]+j;
    }
    return s;
}
int main()
{
    int j ;
    string s;

    cout<<"Sample String (s): "<<" ";
    getline(cin, s);
    cout<<"Sample Integer (j): "<<" ";
    cin>>j;
    cout<<"Converted String: "<<encode(s,j)<<endl;

return 0;
}