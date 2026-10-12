// Write a C program to find power of any number using recursion.

#include <stdio.h>

long long power(int base, int exp);

int main(void)
{
    int base, exp;
    
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    
    printf("\n%d ^ %d = %lld\n", base, exp, power(base, exp));
    
    return 0;
}

long long power(int base, int exp)
{
    if (exp == 0) {
        return 1;
    }
    
    return base * power(base, exp - 1);
}