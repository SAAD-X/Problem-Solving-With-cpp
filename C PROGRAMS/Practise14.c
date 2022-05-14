/*#include<stdio.h>

int main()

{
    float loan_amount  , number_of_years, interest_rate ,monthly_amount, total_amount ;

    printf("Enter the loan amount :\n");
    scanf("%f", &loan_amount);

        printf("Number of Years :\n");
    scanf("%f", &number_of_years);

    printf("Enter the interest rate :\n");
    scanf("%f", &interest_rate);


    total_amount = loan_amount + (loan_amount*interest_rate*5)/100.00;

    monthly_amount = total_amount / (number_of_years*12);

    printf("Total amount = %.2f\n", total_amount);

    printf("Monthly amount = %.2f\n", monthly_amount);

    return 0;
}*/
#include<stdio.h>

int main()
{
    double sum (double data[], int size)
    {
        double s =0.0; int i;
        for( i = 0 ; i < size ; ++i)
            s +=data[i];
        return s;
    }
}
