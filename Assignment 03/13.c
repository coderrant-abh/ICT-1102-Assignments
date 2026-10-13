// Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include <stdio.h>

int sum(int n);

int main(void)
{
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("\nSum of natural numbers (1 to %d) = %d\n\n", n, sum(n));
    
    return 0;
}

int sum(int n)
{
    if (n == 0) {
        return 0;
    }

    return n + sum(n - 1);
}