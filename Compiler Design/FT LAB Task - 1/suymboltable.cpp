#include<iostream>
using namespace std;


class sybmoltable
{
    string identifier[5];
    string operators[5];
    string punctuation[5];

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
            cout << "Invalid input" << endl;
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
};

int main()
{
    sybmoltable obj("op", "id", "punc");
    // obj.identifiers("op");
    // obj.operatorss("id");
    // obj.punctuations("punc");
    return 0;
}