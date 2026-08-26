#include <stdio.h>

int main(void)
{
    float num1, num2;

    printf("\nEnter 1st number: ");
    scanf("%f", &num1);

    printf("Enter 2nd number: ");
    scanf("%f", &num2);

    printf("\nSummation: %.3f\n\n", num1 + num2);

    return 0;
}
