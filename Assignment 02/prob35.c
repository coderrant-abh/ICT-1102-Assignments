// Write a C program to print all Strong numbers between 1 to n.

#include <stdio.h>

int main(void)
{
    int n, i, temp, digit, factorial, sum;

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    printf("\nStrong numbers between 1 and %d are: ", n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;

            factorial = 1;
            for (int j = 1; j <= digit; j++) {
                factorial = factorial * j;
            }

            sum = sum + factorial;
            temp = temp / 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n\n");

    return 0;
}