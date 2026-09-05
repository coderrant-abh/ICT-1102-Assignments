// Write a C program to convert Octal to Binary number system.

#include <stdio.h>

int main(void)
{
    int octal, digit;

    printf("\nEnter an octal number: ");
    scanf("%d", &octal);

    printf("\nBinary equivalent: ");

    while (octal != 0) {
        digit = octal % 10;

        switch (digit) {
            case 0: printf("000"); break;
            case 1: printf("001"); break;
            case 2: printf("010"); break;
            case 3: printf("011"); break;
            case 4: printf("100"); break;
            case 5: printf("101"); break;
            case 6: printf("110"); break;
            case 7: printf("111"); break;
            default:
                printf("Invalid octal number!\n\n");
                return 0;
        }

        octal = octal / 10;
    }

    printf("\n\n");

    return 0;
}