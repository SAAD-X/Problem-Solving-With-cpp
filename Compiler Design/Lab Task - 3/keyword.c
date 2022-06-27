#include <stdio.h>
#include <string.h>
#define MAXINPUT 100
int main()
{
    char input[MAXINPUT] = "";
     keyword[32][10] = {
        "auto", "double", "int", "struct", "break",
        "else", "long",
        "switch", "case", "enum", "register", "typedef",
        "char",
        "extern", "return", "union", "const", "float",
        "short",
        "unsigned", "continue", "for", "signed", "void",
        "default",
        "goto", "sizeof", "voltile", "do", "if",
        "static", "while"};

    printf("Enter Input: ");
    scanf("%s", input);

    int flag = 0, i;
    for (i = 0; i < 32; i++)
    {
        if (strcmp(input, keyword[i]) == 0)
        {
            flag = 1;
        }
    }

    if (flag == 1)
        printf("%s is a keyword", input);
    else
        printf("%s is not a keyword", input);
}