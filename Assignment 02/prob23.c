// Write a C program to calculate the factorial of a number

#include <stdio.h>

int main(void)
{
    int n, i;
    long long factorial = 1;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("\nFactorial of %d = %lld\n\n", n, factorial);

    return 0;
}