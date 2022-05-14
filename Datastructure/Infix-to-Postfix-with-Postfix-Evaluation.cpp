#include <iostream>
#include <stack>
using namespace std;

//defines BOOLean function Operator
bool Operator(char);

//defines BOOLean function Operand
bool Operand(char);

//defines BOOLean function equal or higher
bool higher(char, char);

//defines BOOLean function convert to convert
string convert(string);

//defines integer function to evaluate Postfix Expression
int evaluatePostfixExpression(string post);

//defines integer function to calculate Postfix Expression
int calculate(int a, int b, char operatorSign);

//checking the user input is operator. If operator then the Operator() returns true.
bool Operator(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
    {
        return true; //for operator
    }
    else
    {
        return false; // for operand
    }
}

//checking the user input is operand(uppercase, lowercase or alpha-numeric). If operand then the Operand() returns true.
bool Operand(char x)
{
    if (x >= 'A' && x <= 'Z')
    {
        return true; // for uppercase A,B,C,D,E...
    }
    if (x >= 'a' && x <= 'z')
    {
        return true; // for lowercase a,b,c,d,e...
    }
    if (x >= '0' && x <= '9')
    {
        return true; // for alpha-numeric 1,2,3,4,5...
    }
    else
    {
        return false; // for orepator
    }
}

//Precedence function is for to check that which operator will work first
int precedence(char p)
{
    if (p == '+' || p == '-')
    {
        return 1; // works at last
    }
    if (p == '*' || p == '/')
    {
        return 2; // second highest
    }
    if (p == '^')
    {
        return 3; // highest precedence
    }
    else
    {
        return 0;
    }
}

//This function higher() is used to check the higher or equal precedence of the two operators in infix expression.
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
    if (p1 > p2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//string convert() function is used to convert the infix expression to the postfix expression of the Stack
string convert(string in)
{
    stack<char> S;
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
            post += c;
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

// Calculation, according to arithmetic operator sign
// a and b is for holding the sum value
int calculate(int a, int b, char operatorSign)
{
    if(operatorSign == '+')
    {
        return (a + b); // returns the summation of a, b
    }
    else if(operatorSign == '-')
    {
        return (a - b); // returns the abstruction of a, b
    }
    else if(operatorSign == '*')
    {
        return (a * b); // returns the multiplication of a, b
    }
    else if(operatorSign == '/')
    {
        return (a / b); // returns the division of a, b
    }
}

//POSTFIX evaluation to get result
int evaluatePostfixExpression(string post)
{
    stack<int> myStack;
    char ch;

    for (int i = 0; post[i]; i++)
    {
        ch = post[i];
        if (ch >= '0' && ch <= '9')
            myStack.push(ch - '0');
        else
        {
            int a, b;
            b = myStack.top();
            myStack.pop();

            a = myStack.top();
            myStack.pop();

            myStack.push(calculate(a, b, ch));
        }
    }

    return myStack.top();
}

int main()
{
    string infix_exp, postfix_exp;
    int c, result;

    //user input
    cout<<"Enter an Infix expression: ";
    cin>>infix_exp;

    //Converting into Postfix expression
    postfix_exp = convert(infix_exp);
    cout<<"Postfix expression is: "<<postfix_exp<<endl;

    //Evaluation of Postfix expression
    result = evaluatePostfixExpression(postfix_exp);
    cout<<"After calculation of Postfix Expression: "<<result<< endl;
    return 0;
}