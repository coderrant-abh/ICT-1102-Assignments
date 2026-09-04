// Write a C program to check whether a number is Prime number or not.

#include <stdio.h>

int main(void)
{
    int n, i, prime = 1;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        prime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime) {
        printf("'%d' is a Prime number.\n\n", n);
    } else {
        printf("'%d' is not a Prime number.\n\n", n);
    }

    return 0;
}