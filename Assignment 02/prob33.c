// Write a C program to print all Perfect numbers between 1 to n.

#include <stdio.h>

int main(void)
{
    int n, i, j, sum;

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    printf("\nPerfect numbers between 1 and %d are: ", n);

    for (i = 1; i <= n; i++) {
        sum = 0;

        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum = sum + j;
            }
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n\n");

    return 0;
}