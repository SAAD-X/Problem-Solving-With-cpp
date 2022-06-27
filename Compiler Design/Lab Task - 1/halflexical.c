#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    int i, ic = 0, m, cc = 0, oc = 0, ip = 0, j;
    char b[20], op[20], id[20], con[20], inv[20];

    printf("Enter String: ");
    scanf("%[^\n]s", &b);

    for (i = 0; i < strlen(b); i++)
    {

        if (isspace(b[i]))
        {
            continue;
        }
        else if (isalpha(b[i]))
        {
            id[ic] = b[i];
            ic++;
        }
        else if (isdigit(b[i]))
        {
            m = (b[i] - '0');
            i = i + 1;
            while (isdigit(b[i]))
            {
                m = m * 10 + (b[i] - '0');
                i++;
            }
            i = i - 1;
            con[cc] = m;
            cc++;
        }
        else
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
        }
    }

    for (i = 0; i < strlen(b); i++)
    {
        if (b[i] == '_')
        {
            inv[ip] = '_';
            ip++;
        }
        else if (b[i] == '@')
        {
            inv[ip] = '@';
            ip++;
        }
        else if (b[i] == '%')
        {
            inv[ip] = '%';
            ip++;
        }
        else if (b[i] == '#')
        {
            inv[ip] = '#';
            ip++;
        }
    }

    printf("\nIdentifiers: ");
    for (j = 0; j < ic; j++)
    {
        printf("%c ", id[j]);
    }
    printf("\nConstants: ");
    for (j = 0; j < cc; j++)
    {
        printf("%d ", con[j]);
    }
    printf("\nOperators: ");
    for (j = 0; j < oc; j++)
    {
        printf("%c ", op[j]);
    }
    printf("\nInvailed: ");
    for (j = 0; j < ip; j++)
    {
        printf("%c ", inv[j]);
    }
}