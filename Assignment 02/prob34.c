// Write a C program to check whether a number is Strong number or not.

#include <stdio.h>

int main(void)
{
    int n, temp, digit, factorial, sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        digit = n % 10;

        factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum = sum + factorial;
        n = n / 10;
    }

    if (sum == temp) {
        printf("\n%d is a Strong number.\n\n", temp);
    } else {
        printf("\n%d is not a Strong number.\n\n", temp);
    }

    return 0;
}