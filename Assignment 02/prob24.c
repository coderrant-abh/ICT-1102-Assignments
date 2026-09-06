// Write a C program to find HCF (GCD) of two numbers

#include <stdio.h>

int main(void)
{
    int a, b, remainder;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("\nHCF (GCD) = %d\n\n", a);

    return 0;
}