#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXINPUT 100
int main()
{
    char input[MAXINPUT] = "";
    int length, i;

    printf("Enter Input: ");
    scanf("%s", input);
    length = strlen(input);
    for (i = 0; i < length; i++)
        if (!isdigit(input[i]))
        {
            printf("Entered input is not numeric constant\n");
            exit(1);
        }
    printf("Given input is numeric constant\n");
}