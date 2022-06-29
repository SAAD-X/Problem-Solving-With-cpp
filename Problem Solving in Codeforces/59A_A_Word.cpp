#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i;
    int upper=0,lower=0;
    char ch[100];

    cin>>ch;

    for(i=0; ch[i]!=0; i++)
    {

        if(ch[i]>='A' && ch[i]<='Z')
        {
            upper++;
        }
        else if(ch[i]>='a' && ch[i]<='z')
        {
            lower++;
        }
    }

    if(upper>lower)
    {
        for (int k = 0; k < strlen(ch); k++)
        {
            if(islower(ch[k]))
            {
                ch[k] = ch[k] - 32;
            }
        }
        cout<<ch;
    }
    else if(lower>upper)
    {
        for (int j = 0; j < strlen(ch); j++)
        {
            if(isupper(ch[j]))
            {
                ch[j] = ch[j] + 32;
            }
        }
        cout<<ch;
    }
    else if(upper==lower)
    {
        for (int j = 0; j < strlen(ch); j++)
        {
            if(isupper(ch[j]))
            {
                ch[j] = ch[j] + 32;
            }
        }
        cout<<ch;
    }
    return 0;
}