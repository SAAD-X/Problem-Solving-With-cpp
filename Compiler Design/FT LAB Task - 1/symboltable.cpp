#include<iostream>
using namespace std;


class sybmoltable
{
    string identifier[5];
    string operators[5];
    string punctuation[5];
    string releaseToken[5];

    public:
    sybmoltable(string a, string b, string c)
    {
        if(a == "op")
        {
            identifiers(a);
        }
        else if (b == "id")
        {
            operatorss(b);
        }
        else if (c == "punc")
        {
            punctuations(c);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    void identifiers(string a)
    {
        identifier[0] = a;
        //cout << "Identifier: " << identifier[0] << endl;
    }

    void operatorss(string b)
    {
        operators[0] = b;
        //cout << "Operator: " << operators[0] << endl;
    }

    void punctuations(string c)
    {
        punctuation[0] = c;
        //cout << "Punctuation: " << punctuation[0] << endl;
    }
    void searchtoken(string s)
    {
        for (int i = 0; i < identifier[5].size(); i++)
        {
            if (s == identifier[0])
            {
                releaseToken[0] = s;
                cout<< releaseToken[0] << endl;
            }
        }

        for (int i = 0; i < operators[5].size(); i++)
        {
            if (s == operators[0])
            {
                releaseToken[0] = s;
                cout << releaseToken[0] << endl;
            }
        }

        for (int i = 0; i < punctuation[5].size(); i++)
        {
            if (s == punctuation[0])
            {
                releaseToken[0] = s;
                cout << releaseToken[0] << endl;
            }
        }
    }
};

int main()
{
    sybmoltable obj("op", "id", "punc");
    obj.identifiers("op");
    obj.operatorss("id");
    obj.punctuations("punc");
    obj.searchtoken("op");
    return 0;
}