#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nAddition = %d\n", num1 + num2);
    printf("Subtraction = %d\n", num1 - num2);
    printf("Multiplication = %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Division = %.2f\n", (float)num1 / num2);
        printf("Modulus = %d\n\n", num1 % num2);
    } else {
        printf("\nDivision and Modulus are not possible.\n\n");
    }

    return 0;
}