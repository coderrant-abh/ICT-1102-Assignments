// Write a C program to print all natural numbers in reverse (from n to 1) – using while loop.

#include <stdio.h>

int main(void)
{
    int n, i;
    
    printf("\nEnter the number: ");
    scanf("%d", &n);

    i = n;

    while (i >= 1) {
        printf("%d\n", i);
        i--;
    }

    return 0;
}