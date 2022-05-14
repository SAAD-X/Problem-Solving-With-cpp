#include <stdio.h>

int main()
{
    int a, b;
    float i, j;
    for (a = 0, b = 1; b <= 3; b++)
    {
        printf("I=%d J=%d\n", a, b);
    }
    for (i = .2, j = 1.2; j <= 3.21; j++)
    {
        printf("I=%.1f J=%.1f\n", i, j);
    }
    for (i = .4, j = 1.4; j <= 3.41; j++)
    {
        printf("I=%.1f J=%.1f\n", i, j);
    }
    for (i = .6, j = 1.6; j <= 3.61; j++)
    {
        printf("I=%.1f J=%.1f\n", i, j);
    }
    for (i = .8, j = 1.8; j <= 3.81; j++)
    {
        printf("I=%.1f J=%.1f\n", i, j);
    }
    for (a = 1, b = 2; b <= 4; b++)
    {
        printf("I=%d J=%d\n", a, b);
    }
    for (i = 1.2, j = 2.2; j <= 4.21; j++)
    {
        printf("I=%.1f J=%.1f\n", i, j);
    }
    for (i = 1.4, j = 2.4; j <= 4.41; j++)
    {
        printf("I=%.1f J=%.1f\n", i, j);
    }
    for (i = 1.6, j = 2.6; j <= 4.61; j++)
    {
        printf("I=%.1f J=%.1f\n", i, j);
    }
    for (i = 1.8, j = 2.8; j <= 4.81; j++)
    {
        printf("I=%.1f J=%.1f\n", i, j);
    }
    for (a = 2, b = 3; b <= 5; b++)
    {
        printf("I=%d J=%d\n", a, b);
    }
    return 0;
}