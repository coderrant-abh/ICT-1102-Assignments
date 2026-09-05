// Write a C program to convert Octal to Decimal number system.

#include <stdio.h>

int main(void)
{
    int octal, decimal = 0, base = 1, digit;

    printf("\nEnter an octal number: ");
    scanf("%d", &octal);

    while (octal != 0) {
        digit = octal % 10;

        if (digit > 7) {
            printf("\nInvalid octal number.\n\n");
            return 0;
        }

        decimal = decimal + digit * base;
        base = base * 8;
        octal = octal / 10;
    }

    printf("\nDecimal equivalent = %d\n\n", decimal);

    return 0;
}