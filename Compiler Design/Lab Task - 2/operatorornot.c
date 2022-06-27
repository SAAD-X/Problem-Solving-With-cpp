#include <stdio.h>
#include <ctype.h>
#include <string.h>

int i, j=0, oc = 0;
char op[100], b[100];

int main()
{
    printf("Enter String: ");
    scanf("%[^\n]s", &b);

    for (i = 0; i < strlen(b); i++)
    {
        if (b[i] == '*')
        {
            op[oc] = '*';
            oc++;
        }
        else if (b[i] == '-')
        {
            op[oc] = '-';
            oc++;
        }
        else if (b[i] == '+')
        {
            op[oc] = '+';
            oc++;
        }
        else if (b[i] == '=')
        {
            op[oc] = '=';
            oc++;
        }
        else if (b[i] == '/')
        {
            op[oc] = '/';
            oc++;
        }
        else if (b[i] == '%')
        {
            op[oc] = '%';
            oc++;
        }
    }

    
    for (j = 0; j < oc; j++)
    {
            printf("\nOperator %c", op[j]);
        
    }

    return 0;
}