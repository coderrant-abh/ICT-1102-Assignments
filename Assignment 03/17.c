// Write a C program to find sum of digits of a given number using recursion.
#include <stdio.h>

int sumDigits(int n)
{
    if (n == 0) {
        return 0;
    }
    
    return (n % 10) + sumDigits(n / 10);
}

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("\nSum of digits of %d = %d\n\n", num, sumDigits(num));
    
    return 0;
}