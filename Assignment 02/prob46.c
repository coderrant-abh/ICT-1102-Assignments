// Write a C program to convert Decimal to Octal number system.

#include <stdio.h>

int main(void)
{
    int decimal, octal = 0, remainder, place = 1;

    printf("\nEnter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 8;
        octal = octal + remainder * place;
        decimal = decimal / 8;
        place = place * 10;
    }

    printf("\nOctal equivalent = %d\n\n", octal);

    return 0;
}