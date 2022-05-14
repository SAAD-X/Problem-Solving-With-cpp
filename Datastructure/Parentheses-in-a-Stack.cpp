#include <iostream>
#include <stack>

using namespace std;
bool Pair(char open, char clos)
{
    if (open == '(' && clos == ')')
    {
        return true;
    }
    else if (open == '{' && clos == '}')
    {
        return true;
    }
    else if (open == '[' && clos == ']')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Balanced(string exp)
{
    stack<char> S;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            S.push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (!Pair(S.top(), exp[i]))
            {
                return false;
            }
            else
            {
                S.pop();
            }
        }
    }
    if(S.empty())
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
    string exp;
    cin >> exp;
    if (Balanced(exp))
    {
        cout<<"Valid Expression"<<endl;
    }
    else
    {
        cout<<"Invalid Expression"<<endl;
    }
    return 0;
}