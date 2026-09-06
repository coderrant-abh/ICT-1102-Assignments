// Write a C program to find all the prime factors of a number.

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    printf("\nPrime factors: ");

    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    printf("\n\n");

    return 0;
}