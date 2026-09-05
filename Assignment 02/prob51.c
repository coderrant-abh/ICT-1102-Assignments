// Write a C program to print Pascal triangle upto n rows.

#include <stdio.h>

int main(void)
{
    int n, i, j;
    int value;

    printf("\nEnter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        value = 1;

        // Print spaces
        for (j = 0; j < n - i - 1; j++)
            printf(" ");

        // Print values
        for (j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}