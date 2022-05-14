#include<stdio.h>

int main()

{
    double loan_amount , interest_rate , number_of_years , total_amount , monthly_amount ;


    printf("Enter the loan amount : \n");
    scanf("%1f", &loan_amount);

    printf("Enter the interest rate : \n");
    scanf("%1f", &interest_rate);

    printf("Enter the Number of Years : \n");
    scanf("%1f", &number_of_years);

    total_amount = loan_amount + loan_amount*interest_rate / 100.0;

    monthly_amount = total_amount / (number_of_years * 12);

    printf("Total amount : %0.21f\n", total_amount);

    printf("Monthly amount : %0.21f\n", monthly_amount);

    return 0;


}
