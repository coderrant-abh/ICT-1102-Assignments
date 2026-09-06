// Write a C program to find the LCM of two numbers

#include <stdio.h>

int main(void)
{
    int a, b, lcm;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        lcm = a;
    } else {
        lcm = b;
    }

    while (lcm % a != 0 || lcm % b != 0) {
        lcm++;
    }

    printf("\nLCM (Least common multiple) = %d\n\n", lcm);

    return 0;
}