#include <iostream>
#include <stack>
using namespace std;

bool Operator(char);
bool Operand(char);
bool higher(char, char);
string convert(string);

bool Operator(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
    {
        return true;
    }
    return false;
}

bool Operand(char x)
{
    if (x >= 'A' && x <= 'Z')
    {
        return true;
    }
    if (x >= 'a' && x <= 'z')
    {
        return true;
    }
    if (x >= '0' && x <= '9')
    {
        return true;
    }
    return false;
}

int precedence(char p)
{
    if (p == '+' || p == '-')
    {
        return 1;
    }
    if (p == '*' || p == '/')
    {
        return 2;
    }
    if (p == '^')
    {
        return 3;
    }
    return 0;
}

bool higher(char o1, char o2)
{
    int p1 = precedence(o1);
    int p2 = precedence(o2);
    if (p1 == p2)
    {
        if (o1 == '^')
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    if( p1> p2)
    {
        return true;
    }
    else
    {
        return false;
    }
}


    string convert(string in)
    {
        stack <char> S;
        string post = "";
        char c;

        S.push('(');
        in += ')';

        for (int i = 0; i < in.length(); i++)
        {
            c = in[i];

            if (c == ' ')
            {
                continue;
            }
            else if (c == '(')
            {
                S.push(c);
            }
            else if (Operand(c))
            {
                post+= c;
            }
            else if (Operator(c))
            {
                while (!S.empty() && higher(S.top(), c))
                {
                    post += S.top();
                    S.pop();
                }
                S.push(c);
            }
            else if (c == ')')
            {
                while (!S.empty() && S.top() != '(')
                {
                    post += S.top();
                    S.pop();
                }
                S.pop();
            }
        }
        return post;
    }
    int main()
    {
        string infix_exp, postfix_exp;
        int c;
            cout << " Enter an infix expression: ";
            cin >> infix_exp;
            postfix_exp = convert(infix_exp);
            cout << "\n Postfix expression is: " << postfix_exp;

        return 0;
    }