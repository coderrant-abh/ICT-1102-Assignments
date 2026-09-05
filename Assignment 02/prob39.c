// Write a C program to convert Binary to Octal number system.

#include <stdio.h>

int main(void)
{
    long long binary, decimal = 0, octal = 0;
    int base = 1, remainder;

    printf("\nEnter a binary number: ");
    scanf("%lld", &binary);

    // Convert binary to decimal
    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    // Convert decimal to octal
    base = 1;

    while (decimal > 0) {
        remainder = decimal % 8;
        octal = octal + remainder * base;
        decimal = decimal / 8;
        base = base * 10;
    }

    printf("\nOctal number = %lld\n\n", octal);

    return 0;
}