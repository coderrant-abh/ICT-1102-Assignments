// Write a C program to check whether a number is Perfect number or not.

#include <stdio.h>

int main(void)
{
    int n, i, sum = 0, temp;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    temp = n;

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == temp) {
        printf("\n%d is a Perfect number.\n\n", temp);
    } else {
        printf("\n%d is not a Perfect number.\n\n", temp);
    }

    return 0;
}