#include <stdio.h>
#include <math.h>

int main(void)
{
    float pAmount, time, rate, compound_amount, compound_interest;

    printf("\nEnter Principal amount (P)   : ");
    scanf("%f", &pAmount);

    printf("Enter Time period in year (T): ");
    scanf("%f", &time);

    printf("Enter Rate of Interest (R)   : ");
    scanf("%f", &rate);

    compound_amount = pAmount * pow(1 + (rate / 100), time);
    compound_interest = compound_amount - pAmount;

    printf("\nCompound Interest = %.3f\n\n", compound_interest);

    return 0;
}