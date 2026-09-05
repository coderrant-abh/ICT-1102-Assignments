// Write a C program to convert Binary to Decimal number system.

#include <stdio.h>

int main(void)
{
    long long binary;
    int decimal = 0, base = 1, remainder;

    printf("\nEnter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("\nDecimal number = %d\n\n", decimal);

    return 0;
}