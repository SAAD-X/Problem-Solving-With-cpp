#include<stdio.h>

int main()

{
    int num1 , num2 , add , sub , mul ;
    double div;

    printf("Please enter the value :\n ");

    scanf("%d", &num1);

    printf("Please enter another number :\n ");

    scanf("%d", &num2);

    add= num1+num2;
    sub= num1-num2;
    mul= num1*num2;
    div= num1/num2;

    printf("The value of add is : %d\n ", add);
    printf("The value of sub is : %d\n ", sub);
    printf("The value of mul is : %d\n ", mul);
    printf("The value of div is : %1f\n ", div);

    return 0;
}




