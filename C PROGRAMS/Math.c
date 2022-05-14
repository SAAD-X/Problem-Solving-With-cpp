#include<stdio.h>

int main()

{
    double a1 ,a2 ,b1 ,b2 ,c1 ,c2 ,x ,y ;

    printf("a1 = ");

    scanf("%1f", &a1);

    printf("a2 = ");

    scanf("%1f", &a2);

    printf("b1 = ");

    scanf("%1f", &b1);

    printf("b2 = ");

    scanf("%1f", &b2);

    printf("c1 = ");

    scanf("%1f", &c1);

    printf("c2 = ");

    scanf("%1f", &c2);

    x= (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);

    y= (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);

    printf ("x= %0.21f, y=%0.21f\n", x , y);

    return 0;
}

