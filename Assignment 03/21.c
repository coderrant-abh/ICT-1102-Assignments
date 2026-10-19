// Write a C program to find LCM of two numbers using recursion.
#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(void)
{
    int a, b;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\nLCM of %d and %d = %d\n\n", a, b, lcm(a, b));
    
    return 0;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
