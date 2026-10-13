// Write a C program to generate nth Fibonacci term using recursion.
#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    int n;
    printf("Enter nth value: ");
    scanf("%d", &n);
    
    printf("%dth Fibonacci term = %d\n", n, fibonacci(n));
    
    return 0;
}

int fibonacci(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
