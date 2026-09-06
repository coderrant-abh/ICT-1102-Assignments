// Write a C program to find sum of first and last digit of a number

#include <stdio.h>

int main(void)
{
    long int n;
    int firstDigit, lastDigit;

    printf("\nEnter a number: ");
    scanf("%ld", &n);

    lastDigit = n % 10;

    while (n >= 10) {
        n = n / 10;
    }

    firstDigit = n;

    printf("\nSummation (Only First & Last digt): %d\n\n", firstDigit + lastDigit);

    return 0;
}