//  Write a C program to find GCD (HCF) of two numbers using recursion.
#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nGCD of %d and %d = %d\n\n", a, b, gcd(a, b));
    return 0;
}

int gcd(int x, int y) {
    
    if (y == 0)
        return x;
    
    return gcd(y, x % y);
}
