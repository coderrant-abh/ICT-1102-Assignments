// Write a C program to find sum of all prime numbers between 1 to n

#include <stdio.h>

int main(void)
{
    int n, i, j, Prime;
    int sum = 0;

    printf("\nEnter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        Prime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                Prime = 0;
                break;
            }
        }

        if (Prime) {
            sum = sum + i;
        }
    }

    printf("\nSum of prime numbers between 1 & %d = %d\n\n", n, sum);

    return 0;
}