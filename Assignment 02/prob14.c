// Write a C program to calculate sum of digits of a number

#include <stdio.h>

int main(void)
{
    int n, digit, sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("\nSum of the digits = %d\n\n", sum);

    return 0;
}