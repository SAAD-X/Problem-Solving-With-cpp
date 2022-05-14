#include<stdio.h>

int main()

{
    int a1, a2, b1, b2, c1, c2, x, y;

    printf("a1 = ");
    scanf("%d", &a1);

    printf("a2 = ");
    scanf("%d", &a2);

    printf("b1 = ");
    scanf("%d", &b1);

    printf("b2 = ");
    scanf("%d", &b2);

    printf("c1 = ");
    scanf("%d", &c1);

    printf("c2 = ");
    scanf("%d", &c2);

    x = (b2*c1 - b1*c2) / (a1*b2 - a2*b1) ;

    y = (a1*c2 - a2*c1) / (a1*b2 - a2*b1) ;

    printf("x = %d , y = %d \n", x , y);

    return 0;


}
