// Write a C program to print all Armstrong numbers between 1 to n.

#include <stdio.h>

int main(void)
{
    int n, i, temp, remainder, sum;

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    printf("\nArmstrong numbers between 1 and %d are: ", n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;

        while (temp != 0) {
            remainder = temp % 10;
            sum = sum + remainder * remainder * remainder;
            temp = temp / 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n\n");

    return 0;
}