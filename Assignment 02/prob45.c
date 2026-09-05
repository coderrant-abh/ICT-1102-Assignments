// Write a C program to convert Decimal to Binary number system.

#include <stdio.h>

int main(void)
{
    int decimal, binary = 0, remainder, place = 1;

    printf("\nEnter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + remainder * place;
        decimal = decimal / 2;
        place = place * 10;
    }

    printf("\nBinary equivalent = %d\n\n", binary);

    return 0;
}