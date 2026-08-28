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

    printf("\nFirst digit: %d\n", firstDigit);
    printf("Last digit : %d\n\n", lastDigit);

    return 0;
}