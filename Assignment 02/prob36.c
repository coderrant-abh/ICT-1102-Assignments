// Write a C program to print Fibonacci series up to n terms.

#include <stdio.h>

int main(void)
{
    int n, i, first = 0, second = 1, next;

    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci series up to %d terms: ", n);

    for (i = 1; i <= n; i++) {
        
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n\n");

    return 0;
}