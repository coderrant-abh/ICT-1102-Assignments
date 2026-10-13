// Write a C program to find factorial of any number using recursion.
#include <stdio.h>

long long fact(int n);

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("\nFactorial of %d = %lld\n\n", num, fact(num));
    
    return 0;
}

long long fact(int n)
{
    
    if (n == 0 || n == 1) {
        return 1;
    }
    
    return n * fact(n - 1);
}