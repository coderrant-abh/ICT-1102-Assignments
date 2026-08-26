#include <stdio.h>

int main(void)
{
    float principal, time, rate, simpleInterest;

    printf("\nEnter Principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter Time period in year (T): ");
    scanf("%f", &time);

    printf("Enter Rate of Interest (R): ");
    scanf("%f", &rate);

    simpleInterest = principal * time * (rate / 100.0);
    
    printf("\nSimple Interest = %.3f\n\n", simpleInterest);

    return 0;
}