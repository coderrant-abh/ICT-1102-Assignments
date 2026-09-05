// Write a C program to check whether a number is Armstrong number or not.

#include <stdio.h>

int main(void)
{
    int n, original, remainder, sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
        n = n / 10;
    }

    if (sum == original) {
        printf("\n%d is an Armstrong number.\n\n", original);
    } else {
        printf("\n%d is not an Armstrong number.\n\n", original);
    }

    return 0;
}