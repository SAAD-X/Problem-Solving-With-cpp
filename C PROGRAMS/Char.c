#include<stdio.h>

int main()

{
    int num1, num2, add, sub, mul;
    int div;

    char sign;

    printf("Please enter the number :\n");

    scanf("%d", &num1);

    printf("Please enter another number :\n");

    scanf("%d", &num2);

    add= num1+num2;
    sign = '+';

    printf("%d %c %d = %d\n", num1, sign, num2, add);

    sub= num1-num2;
    sign ='-';

    printf("%d %c %d = %d\n", num1, sign, num2, sub);

    mul= num1*num2;
    sign ='*';

    printf("%d %c %d = %d\n", num1, sign, num2, mul);

    div=num1/num2;
    sign ='/';

    printf("%d %c %d = %d", num1, sign, num2, div);

    return 0;


}
